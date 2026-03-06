// 函数名称: sub_54c190
// 虚拟地址: 0x54c190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_54c190(int32_t arg1)
{
    // 第一条实际指令: int32_t i = arg1
    int32_t i = arg1
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
                return result
            
            while ((*(esi + 0xf84) & 0xffff0000) == 0)
                esi += 0xf88
                
                if (esi u>= result)
                    return result
            
            if (*(esi + 0x430) == i)
                break
        while (*(esi + 4) != i)
        
        int32_t eax_3 = *(esi + 0xebc)
        
        if (eax_3 != 0)
            (*(*data_3078804 + 0x50))(eax_3)
            i = arg1
            *(esi + 0xebc) = 0
        
        *(esi + 0x85c) = 0
        *(esi + 0x434) = 0
        *(esi + 0x430) = 0
        *(esi + 8) = 0
        *(esi + 4) = 0
        *(esi + 0xf80) = 0
}
