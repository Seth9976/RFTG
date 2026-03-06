// 函数名称: sub_5d3b20
// 虚拟地址: 0x5d3b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

enum WAIT_EVENTsub_5d3b20(enum WAIT_EVENT arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x84) == 0)
    if (*(arg1 + 0x84) == 0)
        return arg1
    
    return WaitForSingleObject(*(*(arg1 + 0xa0) + 0xc), 0xffffffff)
}
