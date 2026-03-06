// 函数名称: sub_4e7170
// 虚拟地址: 0x4e7170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*** __convention("regparm")sub_4e7170(int32_t** arg1)
{
    // 第一条实际指令: int32_t* result = sub_4e62c0(arg1[1])
    int32_t* result = sub_4e62c0(arg1[1])
    *arg1 = result
    int32_t edi_1 = arg1[1]
    
    if (edi_1 == 3)
        return sub_553680(result)
    
    if (edi_1 == 0x19)
        return sub_4f2990(result)
    
    if (edi_1 != 5)
        return result
    
    return sub_534bc0(result)
}
