// 函数名称: sub_601480
// 虚拟地址: 0x601480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601480(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        data_bf7ff8 = 0
    else
        data_bf7ff8 = *(arg1 + 4)
    
    if (sub_5d5520() != 0)
        SetCursor(data_bf7ff8)
    
    return 0
}
