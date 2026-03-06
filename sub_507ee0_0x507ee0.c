// 函数名称: sub_507ee0
// 虚拟地址: 0x507ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_507ee0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8c
    (*(*data_26a4500 + 0x14))(&var_8c)
    float var_9c
    float var_88
    sub_405970(&var_9c, &var_88, &data_26a4604)
    var_88 = var_9c
    int32_t var_98
    int32_t var_84 = var_98
    int32_t var_94
    int32_t var_80 = var_94
    float var_7c
    sub_405970(&var_9c, &var_7c, &data_26a4604)
    var_7c = var_9c
    int32_t var_78 = var_98
    int32_t var_74 = var_94
    float var_70
    sub_405ee0(&var_9c, &var_70, &data_26a4604)
    var_70 = var_9c
    int32_t var_6c = var_98
    int32_t var_68 = var_94
    int32_t var_90
    int32_t var_64 = var_90
    float var_60
    sub_405ee0(&var_9c, &var_60, &data_26a4604)
    var_60 = var_9c
    int32_t var_5c = var_98
    int32_t var_58 = var_94
    int32_t eax_10 = var_8c
    int32_t var_54 = var_90
    
    if (eax_10 != 3 && eax_10 != 0)
        __builtin_memcpy(&data_26a4568, &var_8c, 0x80)
        char eax_11
        int80_t st0_1
        st0_1, eax_11 = sub_4e3770(&data_26a4584)
        
        if (eax_11 == 0)
            sub_4c5870("QuatIsValid(gVR.currentHmdState.eyeOrientation[VR_EYE_LEFT])", &data_83f3d3, 
                "VR.cpp", 0x180, "VRUpdatePose")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char eax_13
        int80_t st0_2
        st0_2, eax_13 = sub_4e3770(&data_26a4594)
        
        if (eax_13 == 0)
            sub_4c5870("QuatIsValid(gVR.currentHmdState.eyeOrientation[VR_EYE_RIGHT])", &data_83f3d3, 
                "VR.cpp", 0x181, "VRUpdatePose")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    if (data_26a4601 != 0 || data_26a45a4 == 0)
        var_9c = fconvert.s(fconvert.t(-0.0320000015f))
        long double x87_r7_2 = float.t(0)
        data_26a456c = var_9c
        data_26a4590 = 0x3f800000
        data_26a45a0 = 0x3f800000
        long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(-0.032000001519918442) * x87_r7_2))
        float var_94_1 = fconvert.s(x87_r6_3)
        data_26a4570 = fconvert.s(x87_r6_3)
        var_9c = fconvert.s(fconvert.t(0.0320000015f))
        float eax_16 = var_9c
        data_26a4574 = var_94_1
        data_26a4578 = eax_16
        data_26a4584 = 0
        float var_a0_2 = fconvert.s(x87_r7_2 * fconvert.t(0.032000001519918442))
        data_26a4594 = 0
        long double x87_r7_4 = fconvert.t(var_a0_2)
        float var_94_2 = fconvert.s(x87_r7_4)
        data_26a457c = fconvert.s(x87_r7_4)
        data_26a4580 = var_94_2
        data_26a4588 = 0
        data_26a458c = 0
        data_26a4598 = 0
        data_26a459c = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
