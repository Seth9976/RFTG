// 函数名称: sub_4c7b90
// 虚拟地址: 0x4c7b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c7b90(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68eeb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i = arg1[0xc]
    int32_t ecx = 0
    
    if (i != 0)
        int32_t* edx_1
        
        do
            edx_1 = *i
            i = i[1]
            ecx += edx_1[0x3f7b]
        while (i != 0)
        
        if (ecx != 0)
            int32_t eax_4 = ecx + arg1[7] + 1
            
            if (eax_4 s> arg1[8])
                void* var_30_1 = &arg1[6]
                sub_4c6490(eax_4, edx_1)
            
            char* const var_18
            
            while (arg1[0xe] != 0)
                char* eax_6 = sub_4db440(&arg1[0xc])
                int32_t ecx_1 = arg1[7]
                int128_t* eax_8 = arg1[6] + ecx_1
                int32_t ecx_2 = ecx_1 + *(eax_6 + 0xfdec)
                arg1[7] = ecx_2
                
                if (ecx_2 s> arg1[8])
                    sub_4c5870(
                        "loc.httpResponsePartial.dataLength <= loc.httpResponsePartial.allocatedLength", 
                        &data_83f3d3, "Network.cpp", 0x3d4, "AppendHttpResponse")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* ecx_3 = *(eax_6 + 0xfdec)
                
                if (ecx_3 s<= 0)
                    sub_4c5870("netBuffer->mDataSize > 0", &data_83f3d3, "Network.cpp", 0x3d6, 
                        "AppendHttpResponse")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_5ab990(eax_8, *(eax_6 + 0xfde8) + eax_6, ecx_3, eax_2)
                var_18 = eax_6
                sub_518190(data_27e7bb8 + 0x44, &var_18)
            
            char* eax_9 = arg1[7]
            
            if (eax_9 s>= arg1[8])
                sub_4c5870(
                    "loc.httpResponsePartial.dataLength < loc.httpResponsePartial.allocatedLength", 
                    &data_83f3d3, "Network.cpp", 0x3dd, "AppendHttpResponse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_9[arg1[6]] = 0
            var_18 = &data_83f3d3
            int32_t var_8_1 = 0
            char* const var_14 = &data_83f3d3
            var_8_1.b = 1
            int32_t var_1c
            
            if (sub_4c76f0(&var_18, &var_14, &var_1c, &arg1[6], &var_18, &var_14) != 0)
                sub_4c65a0()
                int128_t* eax_15 = sub_4c6810()
                *(eax_15 + 4) = 0xfa0
                *eax_15 = arg1[0x12]
                *(eax_15 + 0xfdc) = var_1c
                *(eax_15 + 8) = 0
                *(eax_15 + 0xfe4) = *arg1
                *(eax_15 + 0xfe8) = arg1[1]
                *(eax_15 + 0xfec) = arg1[2]
                int32_t edx_5 = arg1[3]
                int128_t* var_20 = eax_15
                eax_15[0xff].d = edx_5
                sub_4c4510(&var_14)
                sub_518190(data_27e7bb8 + 0x38, &var_20)
            else
                sub_4c65a0()
            
            var_8_1.b = 0
            sub_4c43d0(&var_14)
            int32_t var_8_2 = 0xffffffff
            i = sub_4c43d0(&var_18)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
