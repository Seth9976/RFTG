// 函数名称: sub_5abd7c
// 虚拟地址: 0x5abd7c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5abd7c(uint32_t arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    uint32_t dwMilliseconds = 0
    int32_t result
    uint32_t i
    
    do
        result = sub_5a881a(arg1)
        
        if (result != 0)
            break
        
        if (data_bec5ec u<= result)
            break
        
        Sleep(dwMilliseconds)
        i = dwMilliseconds + 0x3e8
        
        if (i u> data_bec5ec)
            i = 0xffffffff
        
        dwMilliseconds = i
    while (i != 0xffffffff)
    return result
}
