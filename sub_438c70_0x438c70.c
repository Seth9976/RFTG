// 函数名称: sub_438c70
// 虚拟地址: 0x438c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_438c70(int32_t arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t edi = arg2[1]
    int32_t edi = arg2[1]
    int32_t result
    
    if (edi != 0xffffffff)
        result = sub_46b360(edi)
    else
        result = arg1 | edi
    
    int32_t ecx = *arg2
    
    if (ecx != 0x22 && ecx != 0x20)
        result.b = result != *(data_27e7a40 + 0x74)
        return result
    
    result.b = 1
    return result
}
