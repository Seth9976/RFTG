// 函数名称: sub_5039a0
// 虚拟地址: 0x5039a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_5039a0(int32_t arg1, int32_t arg2, char* arg3, char* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = arg5
    int32_t* var_83c = 0x400
    int32_t* var_41c = edi
    int128_t var_410[0x40]
    sub_5abfc0(&var_410, 0, var_83c)
    var_83c = 0x3fc
    int32_t var_828 = arg2
    int128_t var_824[0x3f]
    int128_t* result
    int32_t* ecx
    char* edx
    result, ecx, edx = sub_5abfc0(&var_824, 0, var_83c)
    int32_t i = 0
    int128_t* result_1 = nullptr
    
    if (edi[1] s> 0)
        int32_t var_414_1 = 0
        
        while (true)
            void* ebx_1 = *edi
            *(&var_410 + (i << 2)) -= 1
            char* eax_3 = arg3
            var_83c = ecx
            i += 1
            int32_t** var_428_1 = &var_83c
            
            if (eax_3 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*eax_3 != 0)
                void* edx_1 = &eax_3[1]
                
                do
                    ecx.b = *eax_3
                    eax_3 = &eax_3[1]
                while (ecx.b != 0)
                
                int32_t** var_840_1 = &var_83c
                sub_4c40c0(eax_3 - edx_1, edx_1)
                char* ecx_1 = arg3
                edx = var_83c
                
                do
                    eax_3.b = *ecx_1
                    *edx = eax_3.b
                    ecx_1 = &ecx_1[1]
                    edx = &edx[1]
                while (eax_3.b != 0)
            else
                var_83c = &data_83f3d3
            
            void var_82c
            int32_t* ecx_2 = *(&var_82c + (i << 2))
            int32_t* eax_5 = sub_5029b0(eax_3, edx, ecx_2, ecx_2)
            int32_t edx_3 = arg6 | 0x40
            (&var_828)[i] = eax_5
            sub_503910(arg3, edx_3, arg4, eax_5, arg4, edx_3.b)
            edx = *(ebx_1 + var_414_1 + 8)
            *(&var_410 + (i << 2)) = edx
            
            if (edx == 0)
                while (i s> 0)
                    i -= 1
                    
                    if (*(&var_410 + (i << 2)) != 0)
                        break
            
            ecx = var_41c
            var_414_1 += 0xc
            result = result_1 + 1
            result_1 = result
            
            if (result s>= ecx[1])
                break
            
            edi = ecx
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
