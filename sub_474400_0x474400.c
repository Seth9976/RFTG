// 函数名称: sub_474400
// 虚拟地址: 0x474400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_474400(char* arg1 @ esi)
{
    // 第一条实际指令: char eax
    char eax
    int32_t ecx_1
    int32_t edx
    eax, ecx_1, edx = sub_4084a0(arg1, 0x27d401c)
    
    if (eax == 0)
        return sub_4c5680("replay does not exist")
    
    sub_4075c0()
    char* var_c = arg1
    int32_t var_8 = 4
    sub_42dd70(&var_c, edx, ecx_1, &var_c, 0, 0, var_c)
    sub_407670()
    data_27c05f4 = 2
    return 0
}
