// 函数名称: sub_54c230
// 虚拟地址: 0x54c230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_54c230(int32_t arg1)
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
                return result
            
            while ((*(esi + 0xf84) & 0xffff0000) == 0)
                esi += 0xf88
                
                if (esi u>= result)
                    return result
        while (*esi != arg1)
        
        int32_t eax_4 = *(esi + 0xebc)
        
        if (eax_4 != 0)
            (*(*data_3078804 + 0x50))(eax_4)
            *(esi + 0xebc) = 0
        
        *(esi + 0x85c) = 0
        *(esi + 0x434) = 0
        *(esi + 0x430) = 0
        *(esi + 8) = 0
        *(esi + 4) = 0
        *(esi + 0xf80) = 0
}
