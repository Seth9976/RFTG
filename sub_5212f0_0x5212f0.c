// 函数名称: sub_5212f0
// 虚拟地址: 0x5212f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5212f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    while (esi[1] != 0)
        void* ebx_1 = esi[1]
        esi[1] = *(ebx_1 + 0x14)
        *(ebx_1 + 0x14) = 0
        float* eax = *esi
        
        if (eax == 0)
            *esi = ebx_1
            *(ebx_1 + 0x10) = 0
        else
            void** ecx
            float* edx
            
            if (eax[5] != 0)
                float* var_10
                int32_t* var_24_2 = &var_10
                void* var_28_1 = ebx_1
                void* var_c
                float* var_8
                float* edx_1 = sub_521250(arg1, &var_8, &var_c, edx, ecx)
                void* var_2c_1 = ebx_1
                int32_t* eax_4 = sub_521020(var_8, edx_1)
                float* ecx_1 = var_10
                *var_c = eax_4
                eax_4[4] = ecx_1
                eax, ecx, edx = sub_521100(ecx_1)
                esi = arg1
            else
                void* var_24_1 = ebx_1
                eax, ecx, edx = sub_521020(eax, edx)
                *esi = eax
                eax[4] = 0
}
