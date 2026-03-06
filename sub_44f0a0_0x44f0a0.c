// 函数名称: sub_44f0a0
// 虚拟地址: 0x44f0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_44f0a0(int32_t arg1, int32_t arg2, char* arg3, char* arg4 @ edi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e728
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* arg_4
    char* eax_3 = arg_4
    int32_t edx = *(eax_3 + 0x60)
    void* esi_2 = &eax_3[edx << 4]
    *(eax_3 + 0x60) = edx + 1
    eax_3.b = *arg3
    
    if (*arg4 != eax_3.b)
        sub_4c5870("p1.phase == p0.phase", &data_83f3d3, "..\code\RFTGClient.cpp", 0x57e6, 
            "AddPowerDescDouble")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_5
    
    if (eax_3.b != 4 || zx.d(arg3[8]) == 0)
        eax_5 = sx.d(eax_3.b)
    else
        eax_5 = 7
    
    *(esi_2 + 4) = eax_5
    *esi_2 = 0
    int32_t* result
    char* var_18
    
    if (*arg4 != 3)
    label_44f315:
        void var_14
        int32_t var_8_16
        
        if (*arg4 != 5 || (*(arg3 + 8) & 1) == 0)
            int32_t edx_17 = sx.d(*(arg5 + 0xe))
            int32_t var_8_13 = 0xa
            var_8_13.b = 0xb
            sub_4c4510(sub_44be60(&arg_4, sub_44c1b0(&var_14, edx_17, arg3, &var_14, edx_17), 
                &data_849224))
            var_8_13.b = 0xa
            sub_4c43d0(&arg_4)
            int32_t var_8_14 = 0xffffffff
            sub_4c43d0(&var_14)
            int32_t eax_49 = sx.d(*(arg5 + 0xe))
            int32_t var_8_15 = 0xc
            char* eax_51 = *sub_44c1b0(eax_49, arg5, arg4, &var_18, eax_49)
            
            if (eax_51 == 0)
                eax_51 = &data_83f3d3
            
            sub_4c4620(esi_2 + 8, eax_51)
            var_8_16 = 0xffffffff
            result = sub_4c43d0(&var_18)
        else
            int32_t edx_11 = *(arg4 + 8)
            var_18 = *(arg4 + 0xc)
            char** eax_38
            int128_t* ebx_3
            
            if ((edx_11 & 0x200) != 0)
                int32_t eax_34 = sx.d(*(arg5 + 0xe))
                int32_t var_8_7 = 4
                ebx_3 = esi_2 + 8
                var_8_7.b = 5
                sub_4c4510(sub_44be60(&arg_4, sub_44c1b0(eax_34, &var_14, arg3, &var_14, eax_34), 
                    &data_860fe4))
                var_8_7.b = 4
                sub_4c43d0(&arg_4)
                int32_t var_8_8 = 0xffffffff
                sub_4c43d0(&var_14)
                char eax_37 = arg4[0x10]
                char* const ecx_3 = &data_83f3d3
                
                if (eax_37 != 1)
                    ecx_3 = &data_85f840
                
                char* const var_30_9 = ecx_3
                int32_t var_34_6 = sx.d(eax_37)
                eax_38 = sub_4c4a50(&arg_4, "then draw %d card%s")
                int32_t var_8_9 = 6
                goto label_44f3c7
            
            result = nullptr
            
            if ((edx_11 & 0x400) != 0)
                int32_t edx_16 = sx.d(*(arg5 + 0xe))
                int32_t var_8_10 = 7
                ebx_3 = esi_2 + 8
                var_8_10.b = 8
                sub_4c4510(sub_44be60(&arg_4, sub_44c1b0(&var_14, edx_16, arg3, &var_14, edx_16), 
                    &data_860fe4))
                var_8_10.b = 7
                sub_4c43d0(&arg_4)
                int32_t var_8_11 = 0xffffffff
                sub_4c43d0(&var_14)
                eax_38 = sub_4c4a50(&arg_4, "then gain 1 prestige {prestige}")
                int32_t var_8_12 = 9
            label_44f3c7:
                char* eax_39 = *eax_38
                
                if (eax_39 == 0)
                    eax_39 = &data_83f3d3
                
                sub_4c4620(ebx_3, eax_39)
                var_8_16 = 0xffffffff
                result = sub_4c43d0(&arg_4)
    else
        int32_t edx_4 = *(arg4 + 8)
        var_18 = *(arg4 + 0xc)
        
        if ((edx_4 & 8) == 0)
            char** eax_18
            
            if ((edx_4 & 4) == 0)
                if ((edx_4 & 0x10) != 0)
                    int32_t eax_21
                    eax_21.b = arg4[0x10]
                    arg3.b = arg3[0x10]
                    
                    if (eax_21.b != arg3.b)
                        sub_4c5870("p1.value == p0.value", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0x57f6, "AddPowerDescDouble")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t var_30_5 = sx.d(eax_21.b)
                    int32_t var_34_3 = sx.d(arg3.b)
                    eax_18 = sub_4c4a50(&arg_4, 
                        "{help}-%d cost or +%d Military to place Alien worlds 
                            {alienproductionworld}{alienwindfallworld}")
                    int32_t var_8_5 = 2
                    goto label_44f22b
                
                if ((edx_4 & 2) == 0)
                    goto label_44f315
                
                char eax_24 = arg4[0x10]
                arg3.b = arg3[0x10]
                
                if (eax_24 == arg3.b)
                    int32_t var_30_6 = sx.d(eax_24)
                    int32_t var_34_4 = sx.d(arg3.b)
                    eax_18 = sub_4c4a50(&arg_4, 
                        "{help}-%d cost or +%d Military to place Novelty worlds 
                            {noveltyproductionworld}{noveltywindfallworld}")
                    int32_t var_8_6 = 3
                    goto label_44f22b
                
                sub_4c5870("p1.value == p0.value", &data_83f3d3, "..\code\RFTGClient.cpp", 0x57fb, 
                    "AddPowerDescDouble")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_15
            eax_15.b = arg4[0x10]
            arg3.b = arg3[0x10]
            
            if (eax_15.b != arg3.b)
                sub_4c5870("p1.value == p0.value", &data_83f3d3, "..\code\RFTGClient.cpp", 0x57f1, 
                    "AddPowerDescDouble")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_30_3 = sx.d(eax_15.b)
            int32_t var_34_2 = sx.d(arg3.b)
            eax_18 = sub_4c4a50(&arg_4, 
                "{help}-%d cost or +%d Military to place Rare Elements worlds 
                    {rareproductionworld}{rarewindfallworld}")
            int32_t var_8_3 = 1
        label_44f22b:
            sub_4c4510(eax_18)
            int32_t var_8_4 = 0xffffffff
            result = sub_4c43d0(&arg_4)
        else
            int32_t eax_9
            eax_9.b = arg4[0x10]
            arg3.b = arg3[0x10]
            
            if (eax_9.b != arg3.b)
                sub_4c5870("p1.value == p0.value", &data_83f3d3, "..\code\RFTGClient.cpp", 0x57ec, 
                    "AddPowerDescDouble")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_30_1 = sx.d(eax_9.b)
            int32_t var_34_1 = sx.d(arg3.b)
            int32_t var_8_1 = 0
            sub_4c4510(sub_4c4a50(&arg_4, 
                "{help}-%d cost or +%d Military to place Genes worlds 
                    {genesproductionworld}{geneswindfallworld}"))
            int32_t var_8_2 = 0xffffffff
            result = sub_4c43d0(&arg_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
