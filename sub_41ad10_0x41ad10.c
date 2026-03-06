// 函数名称: sub_41ad10
// 虚拟地址: 0x41ad10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_41ad10(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6954d8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_18 = ecx
    int32_t __saved_esi
    int32_t var_24 = __security_cookie ^ &__saved_esi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165ebc & 1) == 0)
        data_3165ebc.d |= 1
        int32_t var_c_1 = 0
        data_3165eb8 = sub_4f5220(data_307c530, "animMenu")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165ebc & 2) == 0)
        data_3165ebc.d |= 2
        int32_t var_c_3 = 1
        data_3165eb4 = sub_4f5220(data_307c530, "animPlayer")
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165ebc & 4) == 0)
        data_3165ebc.d |= 4
        int32_t var_c_5 = 2
        data_3165eb0 = sub_4f5220(data_307c530, "animOpponents")
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165ebc & 8) == 0)
        data_3165ebc.d |= 8
        int32_t var_c_7 = 3
        data_3165eac = sub_4f5220(data_307c530, "dlgSlideAnim")
        int32_t var_c_8 = 0xffffffff
    
    int128_t* eax_9 = *arg1
    void* esi = *(data_27e7a40 + 0x548)
    bool cond:0_1
    
    switch (eax_9)
        case nullptr, 2, 0x18, 0x19, 0x1a, 0x1b, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x2a, 
                0x2b, 0x2c, 0x2d, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 
                0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 1
            if (arg2 == 0)
                data_307bf7c
                sub_4d6980()
            
            int32_t var_28 = 1
            int32_t eax_14
            int80_t st0
            st0, eax_14 = sub_41a390()
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        case 3
            if (arg2 == 0)
                data_307bf80
                sub_4d6980()
            
            int32_t var_28_1 = 0
            sub_41a390()
            void* eax_16 = *(data_27e7a40 + 0x548)
            *(eax_16 + 0x438a8) += 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_16
        case 4
            data_3165eb8
            sub_4199d0()
            eax_9 = data_27e7a54
            cond:0_1 = *(eax_9 + 0x204) != 0
        label_41b096:
            
            if (cond:0_1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
            
            if (arg2 != 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
            
            data_307bee8
            int32_t eax_12 = sub_4d6980()
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
        case 5
            data_3165eb4
            eax_9 = sub_4199d0()
            cond:0_1 = *(data_27e7a54 + 0x204) != 0
            goto label_41b096
        case 6
            data_3165eb0
            eax_9 = sub_4199d0()
            cond:0_1 = *(data_27e7a54 + 0x204) != 0
            goto label_41b096
        case 7
            int32_t eax_10 = sub_4c5680("deal start")
            *(esi + 0x438b5) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10
        case 8
            int32_t eax_11 = sub_4c5680("deal hands")
            *(esi + 0x438b6) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        case 9
            sub_4c5680("show phases")
            data_3165eac
            int128_t* eax_13 = sub_4199d0()
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        case 0xa
            *(esi + 0x438b1) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0xb
            *(esi + 0x438b1) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0xc
            *(esi + 0x438ac) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0xd
            *(esi + 0x438ac) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0xe
            *(esi + 0x438ae) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0xf
            *(esi + 0x438ae) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x10
            *(esi + 0x438ad) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x11
            *(esi + 0x438ad) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x12
            *(esi + 0x438af) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x13
            *(esi + 0x438af) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x14
            *(esi + 0x438b0) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x15
            *(esi + 0x438b0) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x16
            *(esi + 0x438b4) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x17
            *(esi + 0x438b4) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x1c
            *(esi + 0x438b3) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x1d
            *(esi + 0x438b3) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x26, 0x27, 0x28
            *(esi + (*(esi + 0x438e0) << 2) + 0x438b8) = eax_9
            *(esi + 0x438e0) += 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x29
            *(esi + 0x438e0) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x43
            *(esi + 0x438b2) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 0x44
            *(esi + 0x438b2) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x768, "TutorialScriptStepActivate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
