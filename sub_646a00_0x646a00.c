// 函数名称: sub_646a00
// 虚拟地址: 0x646a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_646a00(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ecx_1 = arg1
    void* esi = *(ecx_1 + 0x1c)
    
    if (esi != 0)
        int32_t i = 0
        
        if (*(esi + 8) s> 0)
            void* ebx_1 = esi + 0x20
            
            do
                int32_t eax_1 = *ebx_1
                
                if (eax_1 != 0)
                    __free_base(eax_1)
                
                i += 1
                ebx_1 += 4
            while (i s< *(esi + 8))
        
        int32_t i_1 = 0
        
        if (*(esi + 0xc) s> 0)
            void* edi_1 = esi + 0x220
            
            do
                int32_t eax_2 = *edi_1
                
                if (eax_2 != 0)
                    (*((&data_825e80)[*(edi_1 - 0x100)] + 8))(eax_2)
                
                i_1 += 1
                edi_1 += 4
            while (i_1 s< *(esi + 0xc))
        
        int32_t i_2 = 0
        
        if (*(esi + 0x10) s> 0)
            void* edi_2 = esi + 0x420
            
            do
                int32_t eax_4 = *edi_2
                
                if (eax_4 != 0)
                    (*((&data_825e6c)[*(edi_2 - 0x100)] + 0xc))(eax_4)
                
                i_2 += 1
                edi_2 += 4
            while (i_2 s< *(esi + 0x10))
        
        int32_t i_3 = 0
        
        if (*(esi + 0x14) s> 0)
            void* edi_3 = esi + 0x620
            
            do
                int32_t eax_6 = *edi_3
                
                if (eax_6 != 0)
                    (*((&data_825e74)[*(edi_3 - 0x100)] + 0xc))(eax_6)
                
                i_3 += 1
                edi_3 += 4
            while (i_3 s< *(esi + 0x14))
        
        int32_t i_4 = 0
        
        if (*(esi + 0x18) s> 0)
            void* var_8_1 = nullptr
            void* ebx_2 = esi + 0x720
            
            do
                void* eax_8 = *ebx_2
                
                if (eax_8 != 0)
                    sub_6503a0(eax_8)
                
                int32_t eax_9 = *(esi + 0xb20)
                
                if (eax_9 != 0)
                    sub_650400(var_8_1 + eax_9)
                
                var_8_1 += 0x38
                i_4 += 1
                ebx_2 += 4
            while (i_4 s< *(esi + 0x18))
        
        int32_t eax_10 = *(esi + 0xb20)
        
        if (eax_10 != 0)
            __free_base(eax_10)
        
        int32_t i_5 = 0
        
        if (*(esi + 0x1c) s> 0)
            void* ebx_3 = esi + 0xb24
            
            do
                sub_64bea0(*ebx_3)
                i_5 += 1
                ebx_3 += 4
            while (i_5 s< *(esi + 0x1c))
        
        __free_base(esi)
        ecx_1 = arg1
    
    __builtin_memset(ecx_1, 0, 0x20)
    return 0
}
