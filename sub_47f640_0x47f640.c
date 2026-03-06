// 函数名称: sub_47f640
// 虚拟地址: 0x47f640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47f640(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_692d22
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_8c
    int32_t eax_2 = __security_cookie ^ &var_8c
    int32_t __saved_edi
    int32_t var_9c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edx
    
    if ((data_3165864 & 1) == 0)
        data_3165864.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_6
        eax_6, edx = sub_4f5220(data_307c620, "BtnBack")
        data_3165860 = eax_6
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165864 & 2) == 0)
        data_3165864.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307c620, "BtnOK")
        data_316585c = eax_7
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165864 & 4) == 0)
        data_3165864.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_9
        eax_9, edx = sub_4f5220(data_307c620, "BtnProfiles")
        data_3165858 = eax_9
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165864 & 8) == 0)
        data_3165864.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_10
        eax_10, edx = sub_4f5220(data_307c620, "BtnStats")
        data_3165854 = eax_10
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165864 & 0x10) == 0)
        data_3165864.d |= 0x10
        int32_t var_c_9 = 4
        int32_t eax_11
        eax_11, edx = sub_4f5220(data_307c620, "BtnFriends")
        data_3165850 = eax_11
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165864 & 0x20) == 0)
        data_3165864.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_13
        eax_13, edx = sub_4f5220(data_307c620, "BtnLink")
        data_316584c = eax_13
        int32_t var_c_12 = 0xffffffff
    
    if ((data_3165864 & 0x40) == 0)
        data_3165864.d |= 0x40
        int32_t var_c_13 = 6
        int32_t eax_14
        eax_14, edx = sub_4f5220(data_307c620, "BtnAvatar")
        data_3165848 = eax_14
        int32_t var_c_14 = 0xffffffff
    
    if ((data_3165864 & 0x80) == 0)
        data_3165864.d |= 0x80
        int32_t var_c_15 = 7
        int32_t eax_15
        eax_15, edx = sub_4f5220(data_307c620, "BtnOffline")
        data_3165844 = eax_15
        int32_t var_c_16 = 0xffffffff
    
    if ((data_3165864.d & 0x100) == 0)
        data_3165864.d |= 0x100
        int32_t var_c_17 = 8
        int32_t eax_17
        eax_17, edx = sub_4f5220(data_307c620, "Name")
        data_3165840 = eax_17
        int32_t var_c_18 = 0xffffffff
    
    if (arg2 == data_3165860 || arg2 == data_316585c)
        sub_408a40()
        data_27e7a54
        edx = sub_403e80()
        
        if (data_307d57c != 1 || arg2 != data_316585c)
            data_30d6f38 = data_307c76c
        else
            int32_t edx_5 = data_307ca58
            data_30d7278 = 1
            data_30d6f38 = edx_5
            edx = sub_4021f0()
            
            if (*(data_27e7a40 + 0x20) == 2)
                edx = sub_4023f0(1)
    else if (arg2 == data_3165858)
        data_30d6f38 = data_307c62c
    else if (arg2 == data_3165854)
        edx = data_307c740
        data_30d6f38 = edx
    else if (arg2 == data_3165850)
        data_30d6f38 = data_307c1c0
    else if (arg2 == data_3165844)
        void* eax_19 = data_27e7a54
        int32_t* ecx
        ecx.b = *(eax_19 + 0x50) == 0
        *(eax_19 + 0x50) = ecx.b
        sub_408a40()
        
        if (*(data_27e7a54 + 0x50) == 0)
            edx = sub_4022e0()
        else
            edx = sub_402510(0)
    else if (arg2 == data_316584c)
        data_30d6f38 = data_307c4f8
        data_307cd18 = 0
    else if (arg2 == data_3165848)
        data_30d6f38 = data_307c624
    
    if (arg2 == data_3165840)
        if ((data_3165864.d & 0x200) == 0)
            data_3165864.d |= 0x200
            int32_t var_c_19 = 9
            char const* const var_a0_1 = "players"
            data_316583c = sub_510710(data_307ca3c, edx)
            int32_t var_c_20 = 0xffffffff
        
        data_3092a04
        int32_t eax_24
        char* edx_7
        eax_24, edx_7 = sub_50eb00(data_316583c, 0)
        int32_t eax_25 = 0x400
        
        if ((data_3165864.d & 0x400) == 0)
            data_3165864.d |= 0x400
            int32_t var_c_21 = 0xa
            char const* const var_a0_2 = "dlgUI"
            eax_25 = sub_510710(data_307ca78, edx_7)
            data_3165838 = eax_25
            int32_t var_c_22 = 0xffffffff
        
        float var_60
        float var_40
        __builtin_memcpy(&var_60, sub_50faa0(eax_25, eax_24, data_3165838, &var_40), 0x20)
        var_60 = fconvert.s(fconvert.t(var_60) * fconvert.t(0.00070999999297782779))
        void var_70
        int32_t* eax_28 = sub_406230(&var_70, &data_8409b4, fconvert.s(fneg(fconvert.t(data_be1ac0))))
        int32_t edx_9 = eax_28[1]
        var_40 = *eax_28
        int32_t var_3c_1 = edx_9
        int32_t var_38_1 = eax_28[2]
        int32_t var_34_1 = eax_28[3]
        float var_80
        float var_5c
        sub_405ee0(&var_80, &var_40, &var_5c)
        var_5c = var_80
        float var_4c
        float var_4c_1 = fconvert.s(fconvert.t(var_4c) - fconvert.t(0.44499999284744263))
        int32_t var_7c
        int32_t var_58_1 = var_7c
        int32_t var_78
        int32_t var_54_1 = var_78
        float var_48
        float var_48_1 = fconvert.s(fconvert.t(var_48) - fconvert.t(0.05000000074505806))
        int32_t var_74
        int32_t var_50_1 = var_74
        float var_44
        float var_44_1 = fconvert.s(fconvert.t(var_44) + fconvert.t(0.17000000178813934))
        data_30d72b8 = &sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)[0x16]
        __builtin_memcpy(0x30d727c, &var_60, 0x20)
        data_30d729c = 0
        data_30d72a0 = 0x100
        data_30d72b4 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_8c)
    return 0
}
