// 函数名称: sub_500cb0
// 虚拟地址: 0x500cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_500cb0(int32_t arg1, int32_t* arg2, char* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(arg5 + 0xc) = arg2
    int32_t eax_4 = *(arg4 + 0x10) - 1
    
    if (eax_4 u<= 0x2a)
        uint32_t eax_5 = zx.d(lookup_table_500fd0[eax_4])
        void* const var_3c_2
        int16_t var_20
        char* eax_8
        char* eax_18
        bool cond:0_1
        
        switch (eax_5)
            case 0
                char eax_6 = (arg2[0xa]).b
                
                if ((eax_6 & 0x22) != 0)
                    eax_8 = sub_500b70(arg2[7], arg2, arg5, arg3, eax_6)
                else
                    eax_8 = sub_5008e0(arg5)
                
                goto label_500d0c
            case 1
                eax_8 = sub_5008e0(arg5)
                *arg3 = var_20
            label_500d0c:
                
                if (eax_8.b != 0)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_8
                
            label_500d14:
                char* ebx_1 = *(arg5 + 4)
                char* const eax_10 = &data_83f3d3
                
                if (ebx_1 != 0)
                    eax_10 = ebx_1
                
                char* const var_38_2 = eax_10
                int32_t var_3c_1 = arg2[1]
                int128_t* eax_13 =
                    sub_4fe480(arg3, sub_4c5680("DefParse: failed to read '%s': %s"), arg2, arg4)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_13
            case 2
                eax_8 = sub_5008e0(arg5)
                *arg3 = var_20.b
                goto label_500d0c
            case 3
                eax_18 = *(arg5 + 4)
                
                if (eax_18 == 0)
                    eax_18 = &data_83f3d3
                
                char* var_38_4 = arg3
                var_3c_2 = &data_880728
            label_500dd7:
                eax_8 = sub_5a957c(eax_18, var_3c_2)
                cond:0_1 = eax_8 != 1
            label_500de2:
                
                if (cond:0_1)
                    goto label_500d14
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_8
            case 4
                char* var_38_7 = arg3
                eax_8 = sub_500910(arg5, arg2)
                goto label_500d0c
            case 5
                eax_8 = sub_5008e0(arg5)
                *arg3 = var_20.d != 0
                goto label_500d0c
            case 6
                char* eax_15 = *(arg5 + 4)
                
                if (eax_15 == 0)
                    eax_15 = &data_83f3d3
                
                int32_t var_24
                int32_t* var_38_3 = &var_24
                eax_8.b = sub_5a957c(eax_15, "%lld") == 1
                *arg3 = var_24
                *(arg3 + 4) = var_20.d
                goto label_500d0c
            case 7
                eax_8 = sub_500960(eax_5, arg2, arg3, arg3, arg5)
                goto label_500d0c
            case 8
                eax_18 = *(arg5 + 4)
                
                if (eax_18 == 0)
                    eax_18 = &data_83f3d3
                
                char* var_38_5 = arg3
                var_3c_2 = &data_88072c
                goto label_500dd7
            case 9
                eax_8 = sub_500c80(arg5, arg2, arg3)
                goto label_500d0c
            case 0xa
                char* eax_22 = *(arg5 + 4)
                
                if (eax_22 == 0)
                    eax_22 = &data_83f3d3
                
                void* var_38_10 = &arg3[0xc]
                void* var_3c_6 = &arg3[8]
                void* var_40_4 = &arg3[4]
                char* var_44_2 = arg3
                eax_8 = sub_5a957c(eax_22, "%f %f %f %f")
                cond:0_1 = eax_8 != 4
                goto label_500de2
            case 0xb
                char* const eax_20 = *(arg5 + 4)
                
                if (eax_20 == 0)
                    eax_20 = &data_83f3d3
                
                void* var_38_8 = &arg3[4]
                char* var_3c_4 = arg3
                eax_8 = sub_5a957c(eax_20, "%f %f")
                cond:0_1 = eax_8 != 2
                goto label_500de2
            case 0xc
                char* const eax_21 = *(arg5 + 4)
                
                if (eax_21 == 0)
                    eax_21 = &data_83f3d3
                
                void* var_38_9 = &arg3[8]
                void* var_3c_5 = &arg3[4]
                char* var_40_3 = arg3
                eax_8 = sub_5a957c(eax_21, "%f %f %f")
                cond:0_1 = eax_8 != 3
                goto label_500de2
            case 0xd
                eax_8 = sub_500c00(arg3, arg2, arg5)
                goto label_500d0c
            case 0xe
                eax_8 = sub_500c40(arg3, arg2, arg5)
                goto label_500d0c
            case 0xf
                char* eax_26 = *(arg5 + 4)
                
                if (eax_26 == 0)
                    eax_26 = &data_83f3d3
                
                void* var_38_11 = &arg3[4]
                char* var_3c_7 = arg3
                eax_8 = sub_5a957c(eax_26, "%d %d")
                cond:0_1 = eax_8 != 2
                goto label_500de2
            case 0x10
                char* const eax_28 = *(arg5 + 4)
                
                if (eax_28 == 0)
                    eax_28 = &data_83f3d3
                
                void* var_38_12 = &arg3[8]
                void* var_3c_8 = &arg3[4]
                char* var_40_5 = arg3
                eax_8 = sub_5a957c(eax_28, "%d %d %d")
                cond:0_1 = eax_8 != 3
                goto label_500de2
            case 0x11
                char var_18
                eax_8 = sub_500c80(arg5, arg2, &var_18)
                var_20.b = var_18
                char var_10
                char var_1e_1 = var_10
                char var_14
                var_20:1.b = var_14
                char var_c
                char var_1d_1 = var_c
                *arg3 = var_20.d
                goto label_500d0c
    
    sub_4c5870("Halt", &data_83f3d3, "DefParseTree.cpp", 0x1b3, "DefParseReadSimpleField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
