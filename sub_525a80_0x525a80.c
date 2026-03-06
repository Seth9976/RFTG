// 函数名称: sub_525a80
// 虚拟地址: 0x525a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_525a80(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_521460(arg2)
    int128_t var_40c[0x40]
    sub_5abfc0(&var_40c, 0, 0x400)
    int32_t var_80c = 0
    int128_t var_808[0x3f]
    sub_5abfc0(&var_808, 0, 0x3fc)
    void* var_c24 = arg1
    int128_t var_c20[0x3f]
    int128_t* i = sub_5abfc0(&var_c20, 0, 0x3fc)
    *(arg1 + 0x1450) = 0
    *(arg1 + 0x19d0) = 0
    int32_t j_1 = 0
    int128_t* i_1 = nullptr
    
    if (eax_2[1] s> 0)
        int128_t (* edx)[0x40] = &var_40c
        int32_t ecx = 0
        int32_t var_814_1 = 0
        
        do
            int32_t esi_2 = *edx
            void* ecx_1 = *(&var_c24 + ecx)
            int32_t eax_4 = *(&var_80c + ecx) - esi_2
            *edx = esi_2 - 1
            int32_t* edi_2 = *eax_2 + var_814_1
            int128_t* eax_5 = sub_524c90(eax_4, eax_2, ecx_1)
            eax_5[0x145].d = 0
            eax_5[0x19d].d = 0
            int32_t ecx_2
            int32_t* edx_2
            ecx_2, edx_2 = sub_524f30(edi_2)
            int32_t var_c38_1 = 0
            int32_t var_c3c_1 = 0
            sub_5256b0(arg2, eax_5, edx_2, ecx_2)
            int32_t edi_5 = edi_2[2]
            int32_t j = j_1 + 1
            ecx = j << 2
            edx = &__saved_ebp + ecx - 0x408
            j_1 = j
            *edx = edi_5
            *(&var_80c + ecx) = edi_5
            *(&var_c24 + ecx) = eax_5
            
            if (edi_5 == 0)
                while (j s> 0)
                    j -= 1
                    ecx = j << 2
                    edx = &__saved_ebp + ecx - 0x408
                    
                    if (*(&var_40c + ecx) != 0)
                        break
                
                j_1 = j
            
            var_814_1 += 0xc
            i = i_1 + 1
            i_1 = i
        while (i s< eax_2[1])
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
