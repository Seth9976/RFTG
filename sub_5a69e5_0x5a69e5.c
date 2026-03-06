// 函数名称: sub_5a69e5
// 虚拟地址: 0x5a69e5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5a69e5(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result s< 4)
        result = _sys_tss_get(result * 0x18 + &data_bec350)
    
    return result
}
