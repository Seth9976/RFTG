// 函数名称: sub_5551f0
// 虚拟地址: 0x5551f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5551f0(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    
    while (true)
        char* ecx_1 = *(esi + 8)
        arg1.b = *ecx_1
        
        if (arg1.b != 0x20 && arg1.b != 9 && arg1.b != 0xd && arg1.b != 0xa)
            int32_t result = *(esi + 4)
            
            if (result != 0 && result != 3)
                if (result != 4)
                    if (result == 1)
                        sub_555360(esi + 0x11c, esi + 0xc)
                    else if (result != 2)
                        result.b = 0
                        return result
                    
                    return sub_555150(esi)
                
                sub_555410(esi + 0x11c)
            
            return sub_5550f0(esi)
        
        if (arg1.b == 0xa)
            *(esi + 0x118) += 1
        
        *(esi + 8) = &ecx_1[1]
}
