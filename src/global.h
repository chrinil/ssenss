/*
 * Copyright 2014 Christopher Nilsen
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef GLOBAL_H
#define GLOBAL_H

double global_sum(struct element **sel, double u);
int global_int_sum(MPI_Comm mpi_comm, int n);
double global_max(struct element **sel, double u);
void direct_stiffness_summation(struct element **sel, double ****u);
void direct_stiffness_averaging(struct element **sel, double ****u);
double global_dot_product(struct element **sel, double ****x, double ****y);

#endif
