// 函数名称: sub_519130
// 虚拟地址: 0x519130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_519130(char* arg1)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    arg1.b = *edi
    int32_t result = 0
    
    while (arg1.b != 0)
        char eax_1 = sub_5aa073(sx.d(arg1.b))
        edi = &edi[1]
        
        if (eax_1 == 0x5c)
            eax_1 = 0x2f
        
        result = result u>> 8 ^ *(((zx.d(eax_1) ^ zx.d(result.b)) << 2) + &data_8c0ca0)
        arg1.b = *edi
    
    return result
}
