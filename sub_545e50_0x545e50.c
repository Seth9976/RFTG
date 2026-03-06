// 函数名称: sub_545e50
// 虚拟地址: 0x545e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_545e50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* edx = arg1
    int32_t ecx = arg2
    void* var_8_1 = edx
    
    if (ecx == 0)
        return 
    
    uint32_t eax = zx.d(ecx.w)
    
    if (eax u>= *(edx + 0x4244))
        return 
    
    eax = eax * 0x14c + *(edx + 0x4240)
    int32_t esi
    int32_t var_c = esi
    int32_t* esp_1 = &var_c
    uint32_t esi_1 = eax
    
    if (*(esi_1 + 0x148) == ecx)
        if (*(esi_1 + 0x13c) == 0)
            int32_t ebx
            int32_t var_10_1 = ebx
            int32_t edi
            int32_t var_14_1 = edi
            arg2 = *esi_1
            data_3079448(1, &arg2)
            int32_t i_1 = 0x10
            int32_t* edi_2 = esi_1 + 0x14
            int32_t i
            
            do
                if (*edi_2 != 0)
                    data_3079e28(1, edi_2)
                
                edi_2 = &edi_2[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
            void* eax_3 = *(esi_1 + 0xd8)
            int32_t __saved_ebp
            esp_1 = &__saved_ebp
            
            if (eax_3 != 0)
                var_8_1 = eax_3
                _aligned_free_base(var_8_1)
                esp_1 = &__saved_ebp
                *(esi_1 + 0xd8) = 0
            
            edx = var_8_1
        
        eax = *(edx + 0x424c)
        *(edx + 0x424c) = zx.d(*(esi_1 + 0x148))
        *(esi_1 + 0x148) = eax
        *(edx + 0x4250) -= 1
    
    *esp_1
}
