// 函数名称: sub_5d8850
// 虚拟地址: 0x5d8850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d8850(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t temp1 = modu.dp.d(0:(arg1[3]), arg2)
    uint32_t temp1 = modu.dp.d(0:(arg1[3]), arg2)
    int32_t result = sub_5d87f0(temp1, arg1)
    
    if (result == 0)
        return result
    
    arg1[3] += temp1
    return 1
}
