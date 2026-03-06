// 函数名称: sub_5309b0
// 虚拟地址: 0x5309b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5309b0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_5c
    int32_t* __saved_esi = &var_5c
    char var_58
    char* __saved_edi = &var_58
    int32_t* entry_ebx
    
    for (int32_t i = sub_5a8a9c(entry_ebx, "%s %f"); i != 0xffffffff; 
            i = sub_5a8a9c(entry_ebx, "%s %f"))
        if (i != 0)
            int32_t edi_1 = 0
            float var_60_1 = fconvert.s(fconvert.t(var_5c))
            char* esi_1 = &var_58
            
            if (var_58 != 0)
                do
                    char eax_3 = sub_5aa073(sx.d(*esi_1))
                    esi_1 = &esi_1[1]
                    
                    if (eax_3 == 0x5c)
                        eax_3 = 0x2f
                    
                    edi_1 = edi_1 u>> 8 ^ *(((zx.d(eax_3) ^ zx.d(edi_1.b)) << 2) + &data_8c0ca0)
                while (*esi_1 != 0)
            
            for (void* j = data_307880c; j != 0; j = *(j + 0xc))
                if (edi_1 == *(j + 8))
                    *(j + 4) = fconvert.s(fconvert.t(var_60_1))
                    break
        
        float* var_6c_2 = &var_5c
        char* var_70_1 = &var_58
    
    sub_5a8c61(entry_ebx)
    int32_t result
    result.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
