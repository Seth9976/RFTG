// 函数名称: sub_554a60
// 虚拟地址: 0x554a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_554a60(void* arg1, char* arg2 @ edi)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    int32_t* eax = result + 4
    
    while (*(result + 4) != 0)
        if (sub_5a9697(*eax, arg2) == 0)
            return result
        
        result += 8
        eax = result + 4
    
    return 0
}
