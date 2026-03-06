// 函数名称: sub_670970
// 虚拟地址: 0x670970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_670970(void* arg1, char* arg2, char* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t var_24
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x14)
    char* var_c
    int32_t eax = sub_670650(arg1, arg2, &var_c)
    
    if (eax == 0)
        return sub_666530(arg1, var_c)
    
    if (arg3 == 0 || *arg3 == 0 || arg4 == 0xffffffff)
        int32_t var_34_5 = 0
        char* edi_3 = var_c
        sub_670870(arg1, edi_3, arg3)
        return sub_666530(arg1, edi_3)
    
    int32_t eax_2 = lstrlenA(arg3)
    int32_t eax_3 = sub_66f490(eax_2, arg1, eax_2, &var_24, arg3, arg4)
    sub_66f010(arg1, eax + eax_3 + 2)
    char* ebx_2 = var_c
    sub_66f0b0(arg1, ebx_2, eax + 1)
    int32_t edx_3 = sub_666530(arg1, ebx_2)
    char var_5 = arg4.b
    
    if (arg1 != 0)
        sub_666640(arg1, &var_5, 1)
        edx_3 = sub_662280(arg1, &var_5, 1)
    
    sub_66f710(&var_24, edx_3, arg1, eax_3)
    return sub_66f0f0(arg1)
}
