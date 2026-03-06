// 函数名称: sub_426ed0
// 虚拟地址: 0x426ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_426ed0(int32_t arg1, char arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691254
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = data_3165480
    
    if ((eax_3.b & 1) == 0)
        int32_t ecx_1 = data_307c10c
        eax_3 |= 1
        data_3165480 = eax_3
        data_316547c = ecx_1
    
    if ((eax_3.b & 2) == 0)
        data_3165480 = eax_3 | 2
        int32_t var_8_1 = 0
        data_3165478 = sub_4f5220(data_316547c, "power_gradient_I")
        int32_t var_8_2 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3.b & 4) == 0)
        data_3165480 = eax_3 | 4
        int32_t var_8_3 = 1
        data_3165474 = sub_4f5220(data_316547c, "power_gradient_II")
        int32_t var_8_4 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3.b & 8) == 0)
        data_3165480 = eax_3 | 8
        int32_t var_8_5 = 2
        data_3165470 = sub_4f5220(data_316547c, "power_gradient_III")
        int32_t var_8_6 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3.b & 0x10) == 0)
        data_3165480 = eax_3 | 0x10
        int32_t var_8_7 = 3
        data_316546c = sub_4f5220(data_316547c, "power_gradient_III_double_ctr")
        int32_t var_8_8 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3.b & 0x20) == 0)
        data_3165480 = eax_3 | 0x20
        int32_t var_8_9 = 4
        data_3165468 = sub_4f5220(data_316547c, "power_gradient_III_double_down")
        int32_t var_8_10 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3.b & 0x40) == 0)
        data_3165480 = eax_3 | 0x40
        int32_t var_8_11 = 5
        data_3165464 = sub_4f5220(data_316547c, "power_gradient_$")
        int32_t var_8_12 = 0xffffffff
        eax_3 = data_3165480
    
    if (eax_3.b s>= 0)
        data_3165480 = eax_3 | 0x80
        int32_t var_8_13 = 6
        data_3165460 = sub_4f5220(data_316547c, "power_gradient_IV")
        int32_t var_8_14 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x100) == 0)
        data_3165480 = eax_3 | 0x100
        int32_t var_8_15 = 7
        data_316545c = sub_4f5220(data_316547c, "power_gradient_IV_double_up")
        int32_t var_8_16 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x200) == 0)
        data_3165480 = eax_3 | 0x200
        int32_t var_8_17 = 8
        data_3165458 = sub_4f5220(data_316547c, "power_gradient_V")
        int32_t var_8_18 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x400) == 0)
        data_3165480 = eax_3 | 0x400
        int32_t var_8_19 = 9
        data_3165454 = sub_4f5220(data_316547c, "power_gradient_V_double_up")
        int32_t var_8_20 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x800) == 0)
        data_3165480 = eax_3 | 0x800
        int32_t var_8_21 = 0xa
        data_3165450 = sub_4f5220(data_316547c, "power_I")
        int32_t var_8_22 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x1000) == 0)
        data_3165480 = eax_3 | 0x1000
        int32_t var_8_23 = 0xb
        data_316544c = sub_4f5220(data_316547c, "power_II")
        int32_t var_8_24 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x2000) == 0)
        data_3165480 = eax_3 | 0x2000
        int32_t var_8_25 = 0xc
        data_3165448 = sub_4f5220(data_316547c, "power_III")
        int32_t var_8_26 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x4000) == 0)
        data_3165480 = eax_3 | 0x4000
        int32_t var_8_27 = 0xd
        data_3165444 = sub_4f5220(data_316547c, "power_III_tall")
        int32_t var_8_28 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x8000) == 0)
        data_3165480 = eax_3 | 0x8000
        int32_t var_8_29 = 0xe
        data_3165440 = sub_4f5220(data_316547c, "power_III_top_tall")
        int32_t var_8_30 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x10000) == 0)
        data_3165480 = eax_3 | 0x10000
        int32_t var_8_31 = 0xf
        data_316543c = sub_4f5220(data_316547c, "power_III_top_ctr1")
        int32_t var_8_32 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x20000) == 0)
        data_3165480 = eax_3 | 0x20000
        int32_t var_8_33 = 0x10
        data_3165438 = sub_4f5220(data_316547c, "power_III_top_ctr2")
        int32_t var_8_34 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x40000) == 0)
        data_3165480 = eax_3 | 0x40000
        int32_t var_8_35 = 0x11
        data_3165434 = sub_4f5220(data_316547c, "power_III_top_left")
        int32_t var_8_36 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x80000) == 0)
        data_3165480 = eax_3 | 0x80000
        int32_t var_8_37 = 0x12
        data_3165430 = sub_4f5220(data_316547c, "power_III_bottom")
        int32_t var_8_38 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x100000) == 0)
        data_3165480 = eax_3 | 0x100000
        int32_t var_8_39 = 0x13
        data_316542c = sub_4f5220(data_316547c, "power_III_bottom2")
        int32_t var_8_40 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x200000) == 0)
        data_3165480 = eax_3 | 0x200000
        int32_t var_8_41 = 0x14
        data_3165428 = sub_4f5220(data_316547c, "power_III_bottom_ctr1")
        int32_t var_8_42 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & &__dos_header) == 0)
        data_3165480 = eax_3 | &__dos_header
        int32_t var_8_43 = 0x15
        data_3165424 = sub_4f5220(data_316547c, "power_III_bottom_ctr2")
        int32_t var_8_44 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & &data_800000) == 0)
        data_3165480 = eax_3 | &data_800000
        int32_t var_8_45 = 0x16
        data_3165420 = sub_4f5220(data_316547c, "power_III_bottom_tall")
        int32_t var_8_46 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x1000000) == 0)
        data_3165480 = eax_3 | 0x1000000
        int32_t var_8_47 = 0x17
        data_316541c = sub_4f5220(data_316547c, "power_III_down")
        int32_t var_8_48 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x2000000) == 0)
        data_3165480 = eax_3 | 0x2000000
        int32_t var_8_49 = 0x18
        data_3165418 = sub_4f5220(data_316547c, "power_$")
        int32_t var_8_50 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x4000000) == 0)
        data_3165480 = eax_3 | 0x4000000
        int32_t var_8_51 = 0x19
        data_3165414 = sub_4f5220(data_316547c, "power_IV")
        int32_t var_8_52 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x8000000) == 0)
        data_3165480 = eax_3 | 0x8000000
        int32_t var_8_53 = 0x1a
        data_3165410 = sub_4f5220(data_316547c, "power_IV_double_up")
        int32_t var_8_54 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x10000000) == 0)
        data_3165480 = eax_3 | 0x10000000
        int32_t var_8_55 = 0x1b
        data_316540c = sub_4f5220(data_316547c, "power_IV_tall")
        int32_t var_8_56 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x20000000) == 0)
        data_3165480 = eax_3 | 0x20000000
        int32_t var_8_57 = 0x1c
        data_3165408 = sub_4f5220(data_316547c, "power_V")
        int32_t var_8_58 = 0xffffffff
        eax_3 = data_3165480
    
    if ((eax_3 & 0x40000000) == 0)
        data_3165480 = eax_3 | 0x40000000
        int32_t var_8_59 = 0x1d
        data_3165404 = sub_4f5220(data_316547c, "power_V_top_ctr1")
        int32_t var_8_60 = 0xffffffff
        eax_3 = data_3165480
    
    if (eax_3 s>= 0)
        data_3165480 = eax_3 | 0x80000000
        int32_t var_8_61 = 0x1e
        data_3165400 = sub_4f5220(data_316547c, "power_V_top_ctr2")
        int32_t var_8_62 = 0xffffffff
    
    void* eax_77 = *(data_27e7a40 + 0x548)
    
    if (eax_77 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx_12 = *(eax_77 + 0x45844)
    eax_77.b = *(ecx_12 + 0x45a)
    int32_t eax_79
    
    if (eax_77.b s<= 1 || eax_77.b s>= 4 || *(ecx_12 + 0x45c) != 0)
        eax_79 = 0
    else
        eax_79 = 1
    
    bool cond:0 = eax_79 != 0
    *arg5 = 0xffffffff
    
    if (arg1 - 1 u<= 0x15)
        switch (arg1)
            case 1
                *arg3 = data_3165478
                *arg4 = data_3165450
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 2
                int32_t eax_82 = data_3165474
                *arg3 = eax_82
                *arg4 = data_316544c
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_82
            case 3
                *arg3 = data_3165470
                int32_t eax_84 = data_3165448
                *arg4 = eax_84
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_84
            case 4
                *arg3 = data_3165460
                int32_t eax_92 = data_3165414
                *arg4 = eax_92
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_92
            case 5
                *arg3 = data_3165458
                int32_t eax_96 = data_3165408
                *arg4 = eax_96
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_96
            case 7
                int32_t eax_90 = data_3165464
                *arg3 = eax_90
                *arg4 = data_3165418
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_90
            case 0xa
                if (arg2 != 0 && cond:0 == 0)
                label_427727:
                    int32_t eax_87 = sub_426ed0(3, 0, arg3, arg4, arg5, eax_2)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_87
                
                *arg3 = data_316546c
                *arg4 = data_316543c
                *arg5 = data_3165430
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0xb
                if (arg2 != 0 && cond:0 == 0)
                    goto label_427727
                
                *arg3 = data_316546c
                *arg4 = data_3165438
                *arg5 = data_316542c
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0xc
                if (arg2 != 0 && cond:0 == 0)
                    goto label_427727
                
                *arg3 = data_316546c
                *arg4 = data_3165434
                *arg5 = data_316542c
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0xd
                if (arg2 != 0 && cond:0 == 0)
                    goto label_427727
                
                *arg3 = data_316546c
                *arg4 = data_3165440
                *arg5 = data_3165430
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0xe
                if (arg2 != 0 && cond:0 == 0)
                    goto label_427727
                
                *arg3 = data_316546c
                *arg4 = data_3165434
                *arg5 = data_3165428
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0xf
                if (arg2 != 0 && cond:0 == 0)
                    int32_t eax_89 = sub_426ed0(0x15, 0, arg3, arg4, arg5, eax_2)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_89
                
                *arg3 = data_316546c
                *arg4 = data_3165440
                *arg5 = data_3165424
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0x10
                *arg3 = data_316546c
                *arg4 = data_316543c
                *arg5 = data_3165420
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0x11
                *arg3 = data_3165468
                *arg4 = data_3165448
                *arg5 = data_316541c
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0x12
                int32_t eax_94 = data_316545c
                *arg3 = eax_94
                *arg4 = data_3165410
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_94
            case 0x13
                *arg3 = data_3165454
                *arg4 = data_3165408
                *arg5 = data_3165404
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0x14
                *arg3 = data_3165454
                *arg4 = data_3165408
                *arg5 = data_3165400
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg5
            case 0x15
                *arg3 = data_3165470
                *arg4 = data_3165444
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x16
                *arg3 = data_3165460
                *arg4 = data_316540c
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x19ea, "GetPowerIndicies")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
