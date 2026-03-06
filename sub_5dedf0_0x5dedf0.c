// 函数名称: sub_5dedf0
// 虚拟地址: 0x5dedf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dedf0(int32_t* arg1, CRITICAL_SECTION* arg2, uint32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed a NULL condition variable")
        return 0xffffffff
    
    sub_5d1190(*arg1)
    CRITICAL_SECTION* ecx = *arg1
    arg1[1] += 1
    sub_5d11c0(ecx)
    sub_5d11c0(arg2)
    int32_t result
    
    if (arg3 != 0xffffffff)
        result = sub_5dace0(arg1[3], arg3)
    else
        result = sub_5dad50(arg1[3])
    
    sub_5d1190(*arg1)
    
    if (arg1[2] s> 0)
        if (result s> 0)
            sub_5dad50(arg1[3])
        
        sub_5dad70(arg1[4])
        arg1[2] -= 1
    
    CRITICAL_SECTION* ecx_2 = *arg1
    arg1[1] -= 1
    sub_5d11c0(ecx_2)
    sub_5d1190(arg2)
    return result
}
