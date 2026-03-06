// 函数名称: sub_4cd2d0
// 虚拟地址: 0x4cd2d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4cd2d0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t* eax_1 = *arg1
    int32_t* eax_1 = *arg1
    
    if (eax_1 != 0)
        zip_close(eax_1)
        void* eax = arg1[1]
        *arg1 = 0
        zip_fclose(eax)
        arg1[1] = 0
    
    int32_t result = sub_5a8c61(arg1[5])
    arg1[5] = 0
    return result
}
