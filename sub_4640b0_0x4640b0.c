// 函数名称: sub_4640b0
// 虚拟地址: 0x4640b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4640b0(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_14 = ebx
    int32_t* ebx_1 = arg1
    int32_t esi
    int32_t var_18 = esi
    void* esi_1 = arg2
    int32_t i = (esi_1 - ebx_1) s>> 3
    int32_t edi
    int32_t var_1c = edi
    int32_t* esp_1 = &var_1c
    
    if (i s> 0x20)
        int32_t edi_1 = arg3
        
        do
            int32_t edx
            
            if (edi_1 s<= 0)
                if (i s<= 0x20)
                    break
                
                void* eax_16 = (esi_1 - ebx_1) & 0xfffffff8
                
                if (eax_16 s> 8)
                    *(esp_1 - 4) = arg4
                    edx = sub_464d50(eax_16, edx, esi_1, ebx_1)
                
                void* eax_18 = sub_464e20(arg1, edx, esi_1)
                *esp_1
                esp_1[1]
                esp_1[2]
                return eax_18
            
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = esi_1
            *(esp_1 - 0xc) = ebx_1
            void* var_c
            *(esp_1 - 0x10) = &var_c
            sub_4f3900()
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(edi_1)
            int32_t eax_6 = (eax_4 - edx_1) s>> 1
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(eax_6)
            edi_1 = eax_6 + ((eax_7 - edx_2) s>> 1)
            int32_t* var_8
            bool cond:0_1 = ((var_c - ebx_1) & 0xfffffff8) s>= ((esi_1 - var_8) & 0xfffffff8)
            *(esp_1 - 4) = arg4
            *(esp_1 - 8) = edi_1
            void* esp_11
            
            if (cond:0_1)
                *(esp_1 - 0xc) = esi_1
                *(esp_1 - 0x10) = var_8
                edx = sub_4640b0()
                esp_11 = esp_1 - 8
                esi_1 = var_c
            else
                *(esp_1 - 0xc) = var_c
                *(esp_1 - 0x10) = ebx_1
                edx = sub_4640b0()
                esp_11 = esp_1 - 8
                arg1 = var_8
                ebx_1 = var_8
            
            i = (esi_1 - ebx_1) s>> 3
            esp_1 = esp_11 + 0x10
        while (i s> 0x20)
    
    if (i s> 1 && ebx_1 != esi_1)
        *(esp_1 - 4) = arg4
        *(esp_1 - 8) = esi_1
        *(esp_1 - 0xc) = ebx_1
        i = sub_464e90()
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return i
}
