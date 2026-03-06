// 函数名称: sub_5c6ad0
// 虚拟地址: 0x5c6ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6ad0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        data_bed350 = 0
    else
        bool cond:0_1 = *arg1 == 0x31
        data_bed350 = 1
        
        if (not(cond:0_1))
            data_bed350 = 0
    
    return arg1
}
