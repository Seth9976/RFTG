// 函数名称: sub_54c0b0
// 虚拟地址: 0x54c0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_54c0b0()
{
    // 第一条实际指令: void* esi = nullptr
    void* esi = nullptr
    
    while (true)
        void* ecx_1 = data_be1f10
        
        do
            if (esi != 0)
                esi += 0xf88
            else
                esi = ecx_1
            
            void* result = data_be1f14 * 0xf88 + ecx_1
            
            if (esi u>= result)
            label_54c0f2:
                
                if (ecx_1 != 0)
                    sub_54c550()
                    result = data_be1f10
                    
                    if (result != 0)
                        result = _aligned_free_base(result)
                    
                    __builtin_memset(&data_be1f10, 0, 0x14)
                    data_be1f28 = 0
                
                return result
            
            while ((*(esi + 0xf84) & 0xffff0000) == 0)
                esi += 0xf88
                
                if (esi u>= result)
                    goto label_54c0f2
        while (*(esi + 0xf80) == 0)
        
        int32_t eax_3 = *(esi + 0xebc)
        
        if (eax_3 != 0)
            (*(*data_3078804 + 0x50))(eax_3)
            *(esi + 0xebc) = 0
        
        *(esi + 0x85c) = 0
        *(esi + 0x434) = 0
        *(esi + 0x430) = 0
        *(esi + 8) = 0
        *(esi + 4) = 0
        *(esi + 0xf80) = 0
}
