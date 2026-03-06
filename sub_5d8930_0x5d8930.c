// 函数名称: sub_5d8930
// 虚拟地址: 0x5d8930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d8930(int16_t* arg1 @ esi, int16_t* arg2 @ edi)
{
    // 第一条实际指令: int16_t eax = MulDiv(sx.d(*arg2), 4, data_bf7fc0)
    int16_t eax = MulDiv(sx.d(*arg2), 4, data_bf7fc0)
    int32_t nDenominator = data_bf7fbc
    *arg2 = eax
    int16_t result = MulDiv(sx.d(*arg1), 8, nDenominator)
    *arg1 = result
    return result
}
