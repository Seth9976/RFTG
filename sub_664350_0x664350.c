// 函数名称: sub_664350
// 虚拟地址: 0x664350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_664350(void* arg1, char* arg2)
{
    // 第一条实际指令: if ((*(arg1 + 0x70) & &data_800000) != 0)
    if ((*(arg1 + 0x70) & &data_800000) != 0)
        return sub_664100(arg1, arg2)
    
    sub_664320(arg1, arg2)
    noreturn
}
