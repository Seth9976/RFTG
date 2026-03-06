// 函数名称: sub_5c9e00
// 虚拟地址: 0x5c9e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c9e00(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = data_bed820
    void* ecx = data_bed820
    
    if (ecx == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 != 0)
        void* result = ecx + 0xf4
        
        if (*arg1 == result)
            if ((arg1[0xc].b & 0xc0) != 0)
                result = *(ecx + 0x4c)
                
                if (result != 0)
                    return result(ecx, arg1)
            
            return result
    
    return sub_5cce60("Invalid window")
}
