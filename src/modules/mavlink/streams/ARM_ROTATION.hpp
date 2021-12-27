#include <uORB/topics/arm_rotation.h>
#include <v2.0/omni_am/mavlink_msg_arm_rotation.h>

class MavlinkStreamArmRotation : public MavlinkStream
{
public:
    const char *get_name() const override
    {
        return MavlinkStreamArmRotation::get_name_static();
    }
    static const char *get_name_static()
    {
        return "ARM_ROTATION";
    }
    static uint16_t get_id_static()
    {
        return MAVLINK_MSG_ID_ARM_ROTATION;
    }
    uint16_t get_id() override
    {
        return get_id_static();
    }
    static MavlinkStream *new_instance(Mavlink *mavlink)
    {
        return new MavlinkStreamArmRotation(mavlink);
    }
    unsigned get_size() override
    {
        return MAVLINK_MSG_ID_ARM_ROTATION_LEN + MAVLINK_NUM_NON_PAYLOAD_BYTES;
    }

private:
    uORB::Subscription _sub{ORB_ID(arm_rotation)};

    /* do not allow top copying this class */
    MavlinkStreamArmRotation(MavlinkStreamArmRotation &);
    MavlinkStreamArmRotation& operator = (const MavlinkStreamArmRotation &);

protected:
    explicit MavlinkStreamArmRotation(Mavlink *mavlink) : MavlinkStream(mavlink)
    {}

    bool send() override
    {
        struct arm_rotation_s _arm_rotation;   

        if (_sub.update(&_arm_rotation)) {
            mavlink_arm_rotation_t _msg_arm_rotation;  //make sure mavlink_arm_rotation_t is the definition of your custom MAVLink message

            _msg_arm_rotation.timestamp = _arm_rotation.timestamp;
            _msg_arm_rotation.pos1 = _arm_rotation.pos1;
            _msg_arm_rotation.pos2 = _arm_rotation.pos2;
            _msg_arm_rotation.pos3 = _arm_rotation.pos3;
            _msg_arm_rotation.pos4 = _arm_rotation.pos4;
            _msg_arm_rotation.pos5 = _arm_rotation.pos5;
            _msg_arm_rotation.pos6 = _arm_rotation.pos6;
            _msg_arm_rotation.vel1 = _arm_rotation.vel1;
            _msg_arm_rotation.vel2 = _arm_rotation.vel2;
            _msg_arm_rotation.vel3 = _arm_rotation.vel3;
            _msg_arm_rotation.vel4 = _arm_rotation.vel4;
            _msg_arm_rotation.vel5 = _arm_rotation.vel5;
            _msg_arm_rotation.vel6 = _arm_rotation.vel6;
            mavlink_msg_arm_rotation_send_struct(_mavlink->get_channel(), &_msg_arm_rotation);
            
            return true;
        }

        return false;
    }
};