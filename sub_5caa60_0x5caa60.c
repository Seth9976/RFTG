// 函数名称: sub_5caa60
// 虚拟地址: 0x5caa60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5caa60()
{
    // 第一条实际指令: sub_5c7830(0x303, 1)
    sub_5c7830(0x303, 1)
    sub_5c7830(0x302, 1)
    void* result = sub_5ca1d0()
    void* ecx = data_bed820
    
    if (result == 0)
    label_5caaa5:
        
        if (ecx != 0)
            result = *(ecx + 0xb8)
            
            if (result != 0)
                result = result(ecx)
    else if (ecx != 0)
        int32_t edx_1 = *(ecx + 0xc8)
        
        if (edx_1 != 0)
            result = edx_1(ecx, result)
            ecx = data_bed820
        
        goto label_5caaa5
    
    return result
}
