// 函数名称: sub_5d6380
// 虚拟地址: 0x5d6380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d6380(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[7]
    int32_t ecx = arg1[7]
    
    if (ecx != 0)
        arg1[7] = ecx - 1
        
        if (ecx - 1 s<= 0)
            int32_t ecx_2 = *arg1
            
            if ((ecx_2.b & 2) != 0)
                *arg1 = ecx_2 & 0xfffffffd
                return sub_607460(arg1)
    
    return arg1
}
