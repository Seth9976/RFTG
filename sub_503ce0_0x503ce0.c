// 函数名称: sub_503ce0
// 虚拟地址: 0x503ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_503ce0(int32_t arg1, char* arg2, int32_t* arg3, struct _EXCEPTION_REGISTRATION_RECORD** arg4, char* arg5, char* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f6a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((arg3[0xa].b & 8) == 0)
        int32_t* edi_2 = *arg3 + arg4
        eax_3 = sub_503b50(arg4, arg3)
        
        if (eax_3.b == 0 || arg6 != 0)
            if (sub_4fe230(arg5) != 0)
                void* eax_7 = arg3[7]
                int32_t* eax_8 = sub_502ce0(eax_7, edi_2, arg5, arg2, arg3[1], arg3[0xa], eax_7)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_8
            
            int32_t eax_9 = *(arg5 + 0x10)
            uint32_t ecx_4 = eax_9 - 5
            
            if (ecx_4 u> 0xf)
            label_503f8d:
                
                if (eax_9 s> 0 && eax_9 s< 0x12)
                    sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "DefParseTree.cpp", 0x7f7, 
                        "DefParseTreeMakeFromDefinitionSubField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* edx_10 = arg3[1]
                int32_t* eax_40 = sub_502050(eax_9, edx_10, ecx_4, arg2, edx_10)
                eax_40[3] = arg3
                int32_t* eax_41 = sub_500720()
                eax_40[2] = eax_41
                char* edx_11 = arg3[1]
                eax_3 = sub_504030(eax_41, edx_11, arg5, eax_41, edi_2, arg5, edx_11, arg6)
            else
                ecx_4 = zx.d(lookup_table_504020[ecx_4])
                
                switch (ecx_4)
                    case 0
                        int32_t* edx_6 = arg3[4]
                        char* var_34_8 = arg6
                        int32_t ecx_13 = *(edx_6 + arg4)
                        int32_t var_38_5 = ecx_13
                        void* eax_26 = sub_5033c0(*edi_2, edx_6, ecx_13, arg2)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_26
                    case 1
                        char* var_34_9 = arg6
                        int32_t var_38_6 = arg3[7]
                        void* eax_30 = sub_5033c0(*arg3 + arg4, arg6, ecx_4, arg2)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_30
                    case 2
                        eax_3 = arg4
                        
                        if (*(eax_3 + *arg3) != 0)
                            char* ecx_19 = arg6
                            char* eax_31 = arg3[1]
                            int32_t* eax_32 =
                                sub_504030(eax_31, arg5, ecx_19, arg2, edi_2, arg5, eax_31, ecx_19)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_32
                    case 3
                        int32_t* eax_33 = sub_5021a0(arg2, arg3[1], edi_2)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_33
                    case 4
                        void* edi_4 = *arg3 + arg4
                        void* eax_11 = sub_5028f0(arg2, arg3[1])[2]
                        *(edi_4 + 0xc)
                        int32_t var_8_1 = 0
                        void var_18
                        char* eax_14 = *sub_4c4ab0(&var_18)
                        
                        if (eax_14 == 0)
                            eax_14 = &data_83f3d3
                        
                        sub_5021a0(eax_11, "mFreeListHead", eax_14)
                        int32_t var_8_2 = 0xffffffff
                        sub_4c43d0(&var_18)
                        *(edi_4 + 0x10)
                        int32_t var_8_3 = 1
                        void var_1c
                        char* eax_17 = *sub_4c4ab0(&var_1c)
                        
                        if (eax_17 == 0)
                            eax_17 = &data_83f3d3
                        
                        sub_5021a0(eax_11, "mUsedCount", eax_17)
                        int32_t var_8_4 = 0xffffffff
                        sub_4c43d0(&var_1c)
                        *(edi_4 + 0x14)
                        int32_t var_8_5 = 2
                        void var_20
                        char* eax_20 = *sub_4c4ab0(&var_20)
                        
                        if (eax_20 == 0)
                            eax_20 = &data_83f3d3
                        
                        sub_5021a0(eax_11, "mNextKey", eax_20)
                        int32_t var_8_6 = 0xffffffff
                        char* ecx_9
                        int32_t* edx_5
                        ecx_9, edx_5 = sub_4c43d0(&var_20)
                        int32_t var_34_7 = *(edi_4 + 4)
                        int32_t* var_38_4 = arg3
                        void* eax_23 = sub_5035f0(*edi_4, edx_5, ecx_9, eax_11)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_23
                    case 5
                        char* eax_34 = arg3[7]
                        
                        if (eax_34 == 0)
                            eax_34 = arg6
                        
                        int32_t edx_8 = arg3[0xa]
                        int32_t eax_36 = sub_503910(arg3[1], edx_8, ecx_4, arg2, eax_34, edx_8.b)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_36
                    case 6
                        char* eax_37 = arg3[7]
                        
                        if (eax_37 == 0)
                            eax_37 = arg6
                        
                        int128_t* eax_38 = sub_5039a0(eax_37, arg2, arg3[1], eax_37, edi_2, arg3[0xa])
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_38
                    case 7
                        goto label_503f8d
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
