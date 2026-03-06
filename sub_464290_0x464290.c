// 函数名称: sub_464290
// 虚拟地址: 0x464290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_464290(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_14 = ebx
    int32_t* ebx_1 = arg1
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* esp_1 = &var_1c
    int32_t edi_1 = arg2
    int32_t i = (edi_1 - ebx_1) s/ 0x14
    
    if (i s> 0x20)
        int32_t esi_1 = arg3
        
        do
            if (esi_1 s<= 0)
                if (i s<= 0x20)
                    break
                
                int32_t eax_23
                int32_t edx_13
                edx_13:eax_23 = muls.dp.d(0x66666667, edi_1 - ebx_1)
                
                if ((edi_1 - ebx_1) s/ 0x14 s> 1)
                    *(esp_1 - 4) = arg4
                    *(esp_1 - 8) = ebx_1
                    sub_4650e0(edi_1, edx_13 s>> 3, arg4)
                
                int32_t eax_29 = sub_465210(edi_1, arg1)
                *esp_1
                esp_1[1]
                esp_1[2]
                return eax_29
            
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = ebx_1
            int32_t var_c
            *(esp_1 - 0x10) = &var_c
            sub_4646c0()
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(esi_1)
            int32_t eax_7 = (eax_5 - edx_2) s>> 1
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(eax_7)
            esi_1 = eax_7 + ((eax_8 - edx_3) s>> 1)
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = muls.dp.d(0x66666667, var_c - ebx_1)
            int32_t edx_7 = edx_6 s>> 3
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = esi_1
            int32_t* var_8
            void* esp_11
            
            if ((edx_7 u>> 0x1f) + edx_7 s>= (edi_1 - var_8) s/ 0x14)
                *(esp_1 - 0xc) = edi_1
                *(esp_1 - 0x10) = var_8
                sub_464290()
                esp_11 = esp_1 - 8
                edi_1 = var_c
            else
                *(esp_1 - 0xc) = var_c
                *(esp_1 - 0x10) = ebx_1
                sub_464290()
                esp_11 = esp_1 - 8
                arg1 = var_8
                ebx_1 = var_8
            
            i = (edi_1 - ebx_1) s/ 0x14
            esp_1 = esp_11 + 0x10
        while (i s> 0x20)
    
    if (i s> 1 && ebx_1 != edi_1)
        *(esp_1 - 4) = arg4
        *(esp_1 - 8) = edi_1
        *(esp_1 - 0xc) = ebx_1
        i = sub_4652d0()
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return i
}
