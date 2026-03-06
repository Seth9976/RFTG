// 函数名称: sub_463fe0
// 虚拟地址: 0x463fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_463fe0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_18 = ebx
    int32_t* ebx_1 = arg1
    int32_t esi
    int32_t var_1c = esi
    int32_t esi_1 = arg2
    int32_t i = (esi_1 - ebx_1) s>> 2
    int32_t edi
    int32_t var_20 = edi
    int32_t* esp_1 = &var_20
    
    if (i s> 0x20)
        int32_t edi_1 = arg3
        
        do
            int32_t edx
            
            if (edi_1 s<= 0)
                if (i s<= 0x20)
                    break
                
                int32_t* ecx_6 = (esi_1 - ebx_1) & 0xfffffffc
                
                if (ecx_6 s> 4)
                    ecx_6 = ebx_1
                    edx = sub_464be0(esi_1, edx, ecx_6)
                
                void* eax_15 = sub_464c80(esi_1, edx, ecx_6, ebx_1)
                *esp_1
                esp_1[1]
                esp_1[2]
                return eax_15
            
            *(esp_1 - 4) = esi_1
            *(esp_1 - 8) = ebx_1
            int32_t var_10
            *(esp_1 - 0xc) = &var_10
            sub_4643d0()
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(edi_1)
            int32_t eax_5 = (eax_3 - edx_1) s>> 1
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(eax_5)
            edi_1 = eax_5 + ((eax_6 - edx_2) s>> 1)
            void* edx_5 = (var_10 - ebx_1) & 0xfffffffc
            *(esp_1 - 4) = edi_1
            int32_t* var_c
            void* esp_9
            
            if (edx_5 s>= ((esi_1 - var_c) & 0xfffffffc))
                *(esp_1 - 8) = esi_1
                *(esp_1 - 0xc) = var_c
                edx = sub_463fe0()
                esp_9 = esp_1 - 4
                esi_1 = var_10
            else
                *(esp_1 - 8) = var_10
                *(esp_1 - 0xc) = ebx_1
                edx = sub_463fe0()
                esp_9 = esp_1 - 4
                ebx_1 = var_c
            
            i = (esi_1 - ebx_1) s>> 2
            esp_1 = esp_9 + 0xc
        while (i s> 0x20)
    
    if (i s> 1 && ebx_1 != esi_1)
        *(esp_1 - 4) = esi_1
        i = sub_464cd0()
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return i
}
