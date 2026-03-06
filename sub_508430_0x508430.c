// 函数名称: sub_508430
// 虚拟地址: 0x508430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_508430(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_26a4568 != 0)
        float var_14_1 = fconvert.s(fconvert.t(data_26a4580) + fconvert.t(data_26a4574))
        long double x87_r6_1 = fconvert.t(0.5)
        long double x87_r6_3 =
            fconvert.t(fconvert.s(fconvert.t(data_26a457c) + fconvert.t(data_26a4570)))
        arg1[4] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(data_26a4578) + fconvert.t(data_26a456c)))
            * x87_r6_1)
        *arg1 = data_26a4584
        int32_t ecx_4 = data_26a4590
        arg1[5] = fconvert.s(x87_r6_3 * x87_r6_1)
        arg1[1] = data_26a4588
        arg1[6] = fconvert.s(x87_r6_1 * fconvert.t(var_14_1))
        arg1[2] = data_26a458c
        arg1[3] = ecx_4
        char eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_4e3770(arg1)
        
        if (eax_5 == 0)
            sub_4c5870("QuatIsValid(retval.orientation)", &data_83f3d3, "VR.cpp", 0x206, 
                "VRGetHeadPose")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        arg1[4] = 0
        arg1[5] = 0
        *arg1 = 0
        arg1[6] = 0
        arg1[1] = 0
        arg1[2] = 0
        arg1[3] = 0x3f800000
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
