// 函数名称: sub_44fae0
// 虚拟地址: 0x44fae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_44fae0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eb19
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edi = 0
    int32_t var_8_1 = 0
    int32_t var_1c = 0
    void* eax_4 = *(data_27e7a40 + 0x548)
    
    if (eax_4 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t (__fastcall* var_34)(int32_t arg1) = sub_450450
    char* esi = *(*(eax_4 + 0x45844) + arg3 * 0x14 + 0x46c)
    sub_5a7116(arg4, 0x10, 6, sub_450430)
    int32_t var_8_2 = 0
    int32_t edx = data_27e7a40
    *(arg4 + 0x60) = 0
    void* eax_7 = *(edx + 0x548)
    int32_t var_1c_1 = 1
    
    if (eax_7 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_9 = *(eax_7 + 0x45844)
    bool ecx_1 = *(eax_9 + 0x45a)
    int32_t eax_10
    
    if (ecx_1 s<= 1 || ecx_1 s>= 4 || *(eax_9 + 0x45c) != 0)
        eax_10 = 0
    else
        eax_10 = 1
    
    edx.b = data_26a44a8
    bool cond:6 = eax_10 != 0
    uint32_t eax_12 = sx.d(*(esi + 4)) - 3
    
    if (eax_12 u<= 0xc0)
        eax_12 = zx.d(lookup_table_450350[eax_12])
        void* var_3c_3
        void* var_3c_6
        char* var_38_3
        char* var_38_6
        char* ecx_4
        char* ecx_11
        char* ecx_14
        
        switch (eax_12)
            case 0
            label_44fc5c:
                int32_t var_34_3 = 1
                var_38_3 = esi
                var_3c_3 = arg4
            label_44fc63:
                void* eax_15
                int32_t edx_2
                eax_15, edx_2 = sub_44ef90(eax_12, edx, &esi[0x18], var_3c_3, var_38_3)
                int32_t var_34_4 = 0
                sub_44ef90(eax_15, edx_2, &esi[0x30], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 1
                char* var_34_10 = esi
                sub_44f0a0(eax_12, edx, &esi[0x18], &esi[0x30], arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 2
            label_44fc8e:
                ecx_11 = &esi[0x18]
            label_44fc91:
                int32_t var_34_5 = 1
                sub_44ef90(eax_12, edx, ecx_11, arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 3
                int32_t var_34_30 = 0
                void* var_38_28 = &esi[0x30]
                sub_44f500(&esi[0x30], 3, &esi[0x18], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 4
                int32_t var_34_24 = 0
                var_38_3 = esi
                var_3c_3 = arg4
                
                if (edx.b != 0)
                    goto label_44fc63
                
                sub_44ef90(eax_12, edx, &esi[0x30], var_3c_3, var_38_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 5
                char* var_34_11 = esi
                int32_t* eax_24
                int32_t edx_6
                eax_24, edx_6 = sub_44f0a0(eax_12, edx, &esi[0x18], &esi[0x30], arg4)
                int32_t var_3c_10 = 0
                sub_44ef90(eax_24, edx_6, &esi[0x48], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 6
                int32_t var_34_29 = 1
                void* var_38_27 = &esi[0x30]
                sub_44f500(eax_12, 0, &esi[0x18], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 7
                int32_t var_34_6 = 0
                var_38_6 = esi
                var_3c_6 = arg4
                ecx_14 = &esi[0x18]
            label_44fcb8:
                void* eax_18
                int32_t edx_3
                eax_18, edx_3 = sub_44ef90(eax_12, edx, ecx_14, var_3c_6, var_38_6)
                int32_t var_34_7 = 1
                sub_44ef90(eax_18, edx_3, &esi[0x30], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 8
                int32_t var_34_28 = 0
                void* var_38_26 = &esi[0x30]
                sub_44f500(eax_12, 0, &esi[0x18], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 9
                int32_t var_34_19 = 0
                void* eax_34
                int32_t edx_10
                eax_34, edx_10 = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                char* var_34_20 = esi
                sub_44f0a0(eax_34, edx_10, &esi[0x30], &esi[0x48], arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0xa
                int32_t var_34_21 = 0
                ecx_4 = &esi[0x18]
                
                if (cond:6 == 0)
                    goto label_44fc40
                
                void* var_38_20 = &esi[0x30]
                sub_44f500(eax_12, 0, ecx_4, arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0xb
                ecx_11 = &esi[0x18]
                
                if (cond:6 == 0)
                    goto label_44fc91
                
                int32_t var_34_22 = 0
                void* var_38_21 = &esi[0x30]
                sub_44f500(&esi[0x30], 4, ecx_11, arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0xc
                char* var_34_1 = esi
                int32_t* eax_13
                int32_t edx_1
                eax_13, edx_1 = sub_44f0a0(eax_12, edx, &esi[0x18], &esi[0x30], arg4)
                int32_t var_3c_1 = 0
                eax_12, edx = sub_44ef90(eax_13, edx_1, &esi[0x48], arg4, esi)
                ecx_4 = &esi[0x60]
                int32_t var_34_2 = 0
            label_44fc40:
                sub_44ef90(eax_12, edx, ecx_4, arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0xd
                int32_t var_34_25 = 0
                eax_12, edx = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_26 = 0
                ecx_4 = &esi[0x30]
                
                if (cond:6 == 0)
                    goto label_44fc40
                
                void* var_38_24 = &esi[0x48]
                sub_44f500(eax_12, 3, ecx_4, arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0xe
                if (cond:6 == 0)
                    goto label_44fc8e
                
                int32_t var_34_23 = 0
                void* var_38_22 = &esi[0x30]
                sub_44f500(eax_12, 2, &esi[0x18], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0xf
                int32_t var_34_8 = 0
                void* eax_20
                int32_t edx_4
                eax_20, edx_4 = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                char* var_34_9 = esi
                int32_t* eax_21
                int32_t edx_5
                eax_21, edx_5 = sub_44f0a0(eax_20, edx_4, &esi[0x30], &esi[0x48], arg4)
                int32_t var_3c_9 = 0
                sub_44ef90(eax_21, edx_5, &esi[0x60], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x10
                int32_t var_34_31 = 0
                void* var_38_29 = &esi[0x30]
                sub_44f500(eax_12, 5, &esi[0x18], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x11
                int32_t var_34_43 = 0
                int32_t var_34_44 = 1
                void* var_38_42 = &esi[0x48]
                sub_44f500(sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi), 0, &esi[0x30], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x12
                int32_t var_34_32 = 0
                int32_t var_34_33 = 0
                void* var_38_31 = &esi[0x48]
                sub_44f500(sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi), 0, &esi[0x30], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x13
                int32_t var_34_35 = 0
                sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_36 = 0
                void* var_38_34 = &esi[0x48]
                void* eax_54
                int32_t edx_16
                eax_54, edx_16 = sub_44f500(&esi[0x48], 0, &esi[0x30], arg4, esi)
                int32_t var_44_5 = 0
                sub_44ef90(eax_54, edx_16, &esi[0x60], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x14
                int32_t var_34_39 = 0
                void* eax_59
                int32_t edx_18
                eax_59, edx_18 = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_40 = 0
                sub_44ef90(eax_59, edx_18, &esi[0x30], arg4, esi)
                int32_t var_34_41 = 2
                void* var_38_39 = &esi[0x78]
                sub_44f7a0(&esi[0x78], 0, &esi[0x48], arg4, esi, &esi[0x60])
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x15
                int32_t var_34_48 = 0
                sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_49 = 2
                void* var_38_47 = &esi[0x48]
                sub_44f500(&esi[0x48], 0, &esi[0x30], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x16
                if (cond:6 != 0)
                    goto label_44fc5c
                
                int32_t var_34_16 = 0
                sub_44ef90(eax_12, edx, &esi[0x30], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x17
                int32_t var_34_42 = 0
                void* var_38_40 = &esi[0x48]
                sub_44f7a0(&esi[0x30], 3, &esi[0x18], arg4, esi, &esi[0x30])
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x18
                int32_t var_34_12 = 0
                
                if (cond:6 == 0)
                    void* eax_29
                    int32_t edx_9
                    eax_29, edx_9 = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                    int32_t var_34_15 = 0
                    sub_44ef90(eax_29, edx_9, &esi[0x48], arg4, esi)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg4
                
                void* eax_26
                int32_t edx_7
                eax_26, edx_7 = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_13 = 0
                void* eax_27
                int32_t edx_8
                eax_27, edx_8 = sub_44ef90(eax_26, edx_7, &esi[0x30], arg4, esi)
                int32_t var_34_14 = 0
                sub_44ef90(eax_27, edx_8, &esi[0x48], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x19
                int32_t var_34_27 = 0
                ecx_4 = &esi[0x18]
                
                if (cond:6 == 0)
                    goto label_44fc40
                
                void* var_38_25 = &esi[0x30]
                sub_44f500(&esi[0x30], 3, ecx_4, arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x1a
                int32_t var_34_34 = 0
                void* var_38_32 = &esi[0x30]
                void* eax_51
                int32_t edx_15
                eax_51, edx_15 = sub_44f500(eax_12, 0, &esi[0x18], arg4, esi)
                int32_t var_44_4 = 0
                sub_44ef90(eax_51, edx_15, &esi[0x48], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x1b
                int32_t var_34_37 = 0
                sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_38 = 0
                void* var_38_36 = &esi[0x48]
                void* eax_57
                int32_t edx_17
                eax_57, edx_17 = sub_44f500(&esi[0x48], 3, &esi[0x30], arg4, esi)
                int32_t var_44_6 = 0
                sub_44ef90(eax_57, edx_17, &esi[0x60], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x1c
                int32_t var_34_17 = 0
                var_38_6 = esi
                var_3c_6 = arg4
                ecx_14 = &esi[0x18]
                
                if (cond:6 == 0)
                    goto label_44fcb8
                
                int32_t var_34_18 = 0
                void* var_38_17 = &esi[0x48]
                sub_44f500(sub_44ef90(eax_12, edx, ecx_14, var_3c_6, var_38_6), 4, &esi[0x30], arg4, 
                    esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
            case 0x1d
                int32_t var_34_45 = 0
                void* eax_66
                int32_t edx_20
                eax_66, edx_20 = sub_44ef90(eax_12, edx, &esi[0x18], arg4, esi)
                int32_t var_34_46 = 0
                int32_t var_34_47 = 1
                void* var_38_45 = &esi[0x60]
                sub_44f500(sub_44ef90(eax_66, edx_20, &esi[0x30], arg4, esi), 0, &esi[0x48], arg4, esi)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg4
    
    if (esi[0x15] s> 0)
        void* var_18_1 = &esi[0x18]
        
        do
            int32_t var_34_50 = 0
            eax_12 = sub_44ef90(eax_12, edx, var_18_1, arg4, esi)
            edx = sx.d(esi[0x15])
            var_18_1 += 0x18
            edi += 1
        while (edi s< edx)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
