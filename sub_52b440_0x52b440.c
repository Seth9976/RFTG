// 函数名称: sub_52b440
// 虚拟地址: 0x52b440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_52b440(int32_t* arg1 @ esi, char* arg2)
{
    // 第一条实际指令: void* var_14 = &arg1[1]
    void* var_14 = &arg1[1]
    *arg1 = 0
    int32_t* var_18 = arg1
    arg1[1] = 0
    int32_t result = sub_5a957c(arg2, " %f %f")
    
    if (result == 2)
        result.b = 1
        return result
    
    if (result == 1)
        long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg1)))))
        *arg1 = fconvert.s(x87_r7_3)
        arg1[1] = fconvert.s(x87_r7_3)
    
    result.b = 0
    return result
}
