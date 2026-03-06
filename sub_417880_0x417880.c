// 函数名称: sub_417880
// 虚拟地址: 0x417880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_417880(void* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    char* eax = arg1 + 0x21
    
    do
        if (*eax != 0)
            char ecx = eax[2]
            
            if (ecx == 0 || eax[3] != 0 || ecx == 0)
                return 2
        
        i += 1
        eax = &eax[0x1c]
    while (i s< 9)
    
    return 0
}
