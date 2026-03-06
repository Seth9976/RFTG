// 函数名称: sub_664180
// 虚拟地址: 0x664180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_664180(void* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_d0 = ebx
    char* edi = arg3
    char var_c8[0xc0]
    int32_t i
    
    for (i = 0; i u< 0xbf; )
        ebx.b = *edi
        
        if (ebx.b == 0)
            break
        
        if (arg2 == 0 || ebx.b != 0x40 || edi[1] == 0)
            var_c8[i] = ebx.b
            i += 1
        else
            ebx.b = edi[1]
            edi = &edi[1]
            int32_t esi_1 = sx.d(ebx.b)
            int32_t eax_3 = 0
            arg3 = edi
            int32_t edx
            
            if (esi_1 != 0x31)
                edx.b = 0x31
                
                while (edx.b != 0)
                    edx.b = (*"23456789")[eax_3]
                    eax_3 += 1
                    edi = arg3
                    
                    if (sx.d(edx.b) == esi_1)
                        break
            
            if (esi_1 != 0x31 && eax_3 s>= 8)
                var_c8[i] = ebx.b
                i += 1
            else
                char* eax_5 = (eax_3 << 5) + arg2
                
                while (i u< 0xbf)
                    edx.b = *eax_5
                    
                    if (edx.b == 0)
                        break
                    
                    if (eax_5 u>= &eax_5[0x20])
                        break
                    
                    var_c8[i] = edx.b
                    i += 1
                    eax_5 = &eax_5[1]
        
        edi = &edi[1]
    
    var_c8[i] = 0
    uint32_t result = sub_664100(arg1, &var_c8)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
