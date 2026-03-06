// 函数名称: sub_517050
// 虚拟地址: 0x517050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_517050(int32_t* arg1 @ esi, void* arg2, int32_t arg3, float arg4, int32_t arg5, float arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t eax_1
    int32_t ecx
    char* edx
    eax_1, ecx = sub_516fb0(arg1, edx)
    
    if (eax_1 == 0xffffffff)
        int32_t var_c_1 = edi
        sub_4c5680("can't find anim clip: %s")
        return 0
    
    int32_t var_c_2 = ecx
    int32_t var_14 = arg5
    int32_t result
    int80_t st0
    st0, result = sub_516bc0(arg2, arg1, eax_1, arg3, fconvert.s(fconvert.t(arg4)), arg5, 
        fconvert.s(fconvert.t(arg6)))
    return result
}
