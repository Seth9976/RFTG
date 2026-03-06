// 函数名称: sub_683670
// 虚拟地址: 0x683670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_683670(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    void* edx = *(edi + 0x1cc)
    int32_t ecx = 0
    void* var_8 = edx
    int32_t var_c = 0
    
    if (*(edi + 0x78) s<= 0)
        return 
    
    void* ebx_1 = edx + 0x34
    void* var_10_1 = ebx_1
    
    while (true)
        int32_t eax_1 = 0
        void* eax
        
        if (ecx s> 0)
            int32_t* edx_1 = edx + 0x20
            
            while (*(ebx_1 - 0x14) != *edx_1)
                eax_1 += 1
                edx_1 = &edx_1[1]
                
                if (eax_1 s>= ecx)
                    goto label_6836d6
            
            eax = *(var_8 + (eax_1 << 2) + 0x34)
        
        if (ecx s<= 0 || eax == 0)
        label_6836d6:
            void* eax_3 = (**(edi + 4))(edi, 1, 0x400)
            void* esi_3 = eax_3
            
            for (void* const i = &data_835ab0; i s< &data_835bb0; i += 0x10)
                for (int32_t j = 0; j s< 0x10; )
                    int32_t eax_5
                    int32_t edx_5
                    edx_5:eax_5 = sx.q(0xfe01 - zx.d(*(i + j)) * 0x1fe)
                    j += 1
                    esi_3 += 4
                    int32_t esi_1
                    *(esi_3 - 4) = divs.dp.d(edx_5:eax_5, (esi_1 << 9) - 0x200)
            
            eax = eax_3
            edi = arg1
            ecx = var_c
            ebx_1 = var_10_1
        
        *ebx_1 = eax
        ecx += 1
        ebx_1 += 4
        var_c = ecx
        var_10_1 = ebx_1
        
        if (ecx s>= *(edi + 0x78))
            break
        
        edx = var_8
}
