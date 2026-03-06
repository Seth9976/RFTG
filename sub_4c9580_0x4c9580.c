// 函数名称: sub_4c9580
// 虚拟地址: 0x4c9580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c9580(int32_t arg1)
{
    // 第一条实际指令: data_be1098 = arg1
    data_be1098 = arg1
    int32_t i = 1
    data_be1a58 = 1
    
    do
        int32_t ecx_1 = (&data_be1094)[i]
        (&data_be1098)[i] = (ecx_1 u>> 0x1e ^ ecx_1) * 0x6c078965 + i
        i = data_be1a58 + 1
        data_be1a58 = i
    while (i u< 0x270)
    
    return i
}
