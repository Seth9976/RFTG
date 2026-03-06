// 函数名称: sub_4641a0
// 虚拟地址: 0x4641a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4641a0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
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
    int32_t i = (edi_1 - ebx_1) s>> 2
    
    if (i s> 0x20)
        int32_t esi_1 = arg3
        
        do
            int32_t edx
            
            if (esi_1 s<= 0)
                if (i s<= 0x20)
                    break
                
                if (((edi_1 - ebx_1) & 0xfffffffc) s> 4)
                    *(esp_1 - 4) = arg4
                    edx = sub_4e33f0(ebx_1, edx, edi_1)
                
                void* eax_19 = sub_464f50(edi_1, edx, arg1)
                *esp_1
                esp_1[1]
                esp_1[2]
                return eax_19
            
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = edi_1
            *(esp_1 - 0xc) = ebx_1
            int32_t var_c
            *(esp_1 - 0x10) = &var_c
            sub_464510()
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(esi_1)
            int32_t eax_6 = (eax_4 - edx_1) s>> 1
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(eax_6)
            esi_1 = eax_6 + ((eax_7 - edx_2) s>> 1)
            int32_t* var_8
            bool cond:0_1 = ((var_c - ebx_1) & 0xfffffffc) s>= ((edi_1 - var_8) & 0xfffffffc)
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = esi_1
            void* esp_11
            
            if (cond:0_1)
                *(esp_1 - 0xc) = edi_1
                *(esp_1 - 0x10) = var_8
                edx = sub_4641a0()
                esp_11 = esp_1 - 8
                edi_1 = var_c
            else
                *(esp_1 - 0xc) = var_c
                *(esp_1 - 0x10) = ebx_1
                edx = sub_4641a0()
                esp_11 = esp_1 - 8
                arg1 = var_8
                ebx_1 = var_8
            
            i = (edi_1 - ebx_1) s>> 2
            esp_1 = esp_11 + 0x10
        while (i s> 0x20)
    
    if (i s> 1 && ebx_1 != edi_1)
        *(esp_1 - 4) = arg4
        *(esp_1 - 8) = edi_1
        *(esp_1 - 0xc) = ebx_1
        i = sub_464fa0()
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return i
}
