// 函数名称: sub_535220
// 虚拟地址: 0x535220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_535220(int32_t arg1)
{
    // 第一条实际指令: char* result = sub_5a8f10(arg1, 0x2e)
    char* result = sub_5a8f10(arg1, 0x2e)
    
    if (result == 0)
        return result
    
    if (sub_5a9697(result, ".fbx") == 0)
        return 3
    
    if (sub_5a9697(result, ".xob") == 0)
        return 1
    
    uint32_t eax_4 = sub_5a9697(result, ".xstructure")
    int32_t eax_5 = neg.d(eax_4)
    return (sbb.d(eax_5, eax_5, eax_4 != 0) & 0xfffffffe) + 2
}
