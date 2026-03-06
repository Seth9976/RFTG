// 函数名称: sub_5def10
// 虚拟地址: 0x5def10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HMODULEsub_5def10(char* arg1)
{
    // 第一条实际指令: void* var_218 = sub_5cd1b0(arg1) + 1
    void* var_218 = sub_5cd1b0(arg1) + 1
    char* var_21c = arg1
    PWSTR lpLibFileName = sub_5dd160("UTF-16LE", "UTF-8")
    HMODULE result = LoadLibraryW(lpLibFileName)
    PWSTR lpLibFileName_1 = lpLibFileName
    sub_5d0af0()
    
    if (result == 0)
        void var_204
        sub_5cd270(&var_204, "Failed loading ", 0x200)
        sub_5cd340(&var_204, arg1, 0x200)
        sub_5dc5a0(&var_204)
    
    return result
}
